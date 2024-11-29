#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contactmanager.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addContact, &QPushButton::clicked, this, &MainWindow::on_addContactButton_clicked);

    connect(ui->removeContact, &QPushButton::clicked, this, &MainWindow::on_removeContactButton_clicked);

    contactManager = new ContactManager();

    ui->contactsTable->setColumnCount(3);
    ui->contactsTable->setHorizontalHeaderLabels({"Name", "Phone Number", "Email"});
    ui->contactsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->contactsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    loadContacts();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete contactManager;
}
void MainWindow::on_addContactButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    QString phoneNumber = ui->phoneLineEdit->text();
    QString email = ui->emailLineEdit->text();

    if (name.isEmpty() || phoneNumber.isEmpty() || email.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all the fields.");
        return;
    }

    contactManager->addContact(name.toStdString(), phoneNumber.toStdString(), email.toStdString());

    loadContacts();
    ui->nameLineEdit->clear();
    ui->phoneLineEdit->clear();
    ui->emailLineEdit->clear();
}
void MainWindow::on_removeContactButton_clicked()
{
    QString phoneNumber = ui->phoneLineEdit->text();

    if (phoneNumber.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter the phone number to remove.");
        return;
    }

    contactManager->removeContact(phoneNumber.toStdString());

    loadContacts();
    ui->nameLineEdit->clear();
    ui->emailLineEdit->clear();
    ui->phoneLineEdit->clear();
}

void MainWindow::loadContacts()
{
    std::vector<Contact*> contacts = contactManager->getContactsSortedByName();

    ui->contactsTable->setRowCount(0);

    // Add contacts to the table
    for (size_t i = 0; i < contacts.size(); ++i) {
        Contact* contact = contacts[i];

        int row = ui->contactsTable->rowCount();
        ui->contactsTable->insertRow(row);

        ui->contactsTable->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(contact->name)));
        ui->contactsTable->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(contact->phoneNumber)));
        ui->contactsTable->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(contact->email)));
    }
}
