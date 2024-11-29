#ifndef CONTACTMANAGER_H
#define CONTACTMANAGER_H

#include <string>
#include <vector>

class Contact {
public:
    std::string name;
    std::string phoneNumber;
    std::string email;

    Contact(std::string n, std::string p, std::string e)
        : name(n), phoneNumber(p), email(e) {}
};

struct Node {
    Contact* contact;
    Node* next;
    Node(Contact* c) : contact(c), next(nullptr) {}
};

class HashTable {
private:
    std::vector<Contact*> table;
    int tableSize;

    int hashFunction(std::string key);

public:
    HashTable(int size = 10);
    void insert(std::string key, Contact* contact);
    Contact* search(std::string key);
    void remove(std::string key);
};

class BST {
private:
    struct Node {
        Contact* contact;
        Node* left;
        Node* right;

        Node(Contact* c) : contact(c), left(nullptr), right(nullptr) {}
    };

    Node* root;

    void insert(Node*& node, Contact* contact);
    void inorder(Node* node, std::vector<Contact*>& contacts);

public:
    BST();
    void insert(Contact* contact);
    void remove(Contact* contact);
    std::vector<Contact*> getContactsSortedByName();
};

class ContactManager {
private:
    HashTable hashTable;
    BST bst;
    Node* head;

public:
    ContactManager();
    void addContact(std::string name, std::string phoneNumber, std::string email);
    void removeContact(std::string phoneNumber);
    std::vector<Contact*> getContactsSortedByName();
    void printContacts();

    void removeFromLinkedList(Contact* contact);
};

#endif // CONTACTMANAGER_H
