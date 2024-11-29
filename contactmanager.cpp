#include "contactmanager.h"
#include <iostream>
#include <vector>

int HashTable::hashFunction(std::string key) {
    int hashValue = 10;
    for (char ch : key) {
        hashValue += static_cast<int>(ch);
    }
    return hashValue % tableSize;
}

HashTable::HashTable(int size) : tableSize(size) {
    table.resize(tableSize, nullptr);
}

void HashTable::insert(std::string key, Contact* contact) {
    int index = hashFunction(key);
    while (table[index] != nullptr) {
        index = (index + 1) % tableSize;
    }
    table[index] = contact;
}

Contact* HashTable::search(std::string key) {
    int index = hashFunction(key);
    while (table[index] != nullptr) {
        if (table[index]->phoneNumber == key || table[index]->email == key) {
            return table[index];
        }
        index = (index + 1) % tableSize;
    }
    return nullptr;
}

void HashTable::remove(std::string key) {
    int index = hashFunction(key);
    while (table[index] != nullptr) {
        if (table[index]->phoneNumber == key || table[index]->email == key) {
            table[index] = nullptr;
            return;
        }
        index = (index + 1) % tableSize;
    }
}

void BST::insert(Node*& node, Contact* contact) {
    if (node == nullptr) {
        node = new Node(contact);
    } else if (contact->name < node->contact->name) {
        insert(node->left, contact);
    } else {
        insert(node->right, contact);
    }
}

void BST::inorder(Node* node, std::vector<Contact*>& contacts) {
    if (node != nullptr) {
        inorder(node->left, contacts);
        contacts.push_back(node->contact);
        inorder(node->right, contacts);
    }
}

BST::BST() : root(nullptr) {}

void BST::insert(Contact* contact) {
    insert(root, contact);
}

void BST::remove(Contact* contact) {
}
void ContactManager::removeFromLinkedList(Contact* contact) {
    if (!head) return;

    if (head->contact == contact) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next) {
        if (current->next->contact == contact) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            return;
        }
        current = current->next;
    }
}
std::vector<Contact*> BST::getContactsSortedByName() {
    std::vector<Contact*> contacts;
    inorder(root, contacts);
    return contacts;
}

ContactManager::ContactManager() : hashTable(10), head(nullptr) {}

void ContactManager::addContact(std::string name, std::string phoneNumber, std::string email) {
    Contact* contact = new Contact(name, phoneNumber, email);

    hashTable.insert(phoneNumber, contact);
    hashTable.insert(email, contact);

    bst.insert(contact);

    Node* newNode = new Node(contact);
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void ContactManager::removeContact(std::string phoneNumber) {
    Contact* contact = hashTable.search(phoneNumber);

    if (contact) {
        hashTable.remove(phoneNumber);
        hashTable.remove(contact->email);

        bst.remove(contact);

        removeFromLinkedList(contact);

        delete contact;
    }
}


std::vector<Contact*> ContactManager::getContactsSortedByName() {
    return bst.getContactsSortedByName();
}

void ContactManager::printContacts() {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << "Name: " << temp->contact->name
                  << ", Phone: " << temp->contact->phoneNumber
                  << ", Email: " << temp->contact->email << std::endl;
        temp = temp->next;
    }
}
