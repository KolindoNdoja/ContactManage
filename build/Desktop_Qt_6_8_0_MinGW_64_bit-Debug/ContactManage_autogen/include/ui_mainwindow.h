/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddContactClicked;
    QPushButton *addContact;
    QPushButton *removeContact;
    QLineEdit *nameLineEdit;
    QTableWidget *contactsTable;
    QLineEdit *phoneLineEdit;
    QLineEdit *emailLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AddContactClicked = new QPushButton(centralwidget);
        AddContactClicked->setObjectName("AddContactClicked");
        AddContactClicked->setGeometry(QRect(430, 30, 80, 24));
        addContact = new QPushButton(centralwidget);
        addContact->setObjectName("addContact");
        addContact->setGeometry(QRect(430, 60, 80, 24));
        removeContact = new QPushButton(centralwidget);
        removeContact->setObjectName("removeContact");
        removeContact->setGeometry(QRect(430, 90, 80, 24));
        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(280, 30, 113, 24));
        contactsTable = new QTableWidget(centralwidget);
        if (contactsTable->columnCount() < 3)
            contactsTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        contactsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        contactsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        contactsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        contactsTable->setObjectName("contactsTable");
        contactsTable->setGeometry(QRect(270, 150, 301, 291));
        phoneLineEdit = new QLineEdit(centralwidget);
        phoneLineEdit->setObjectName("phoneLineEdit");
        phoneLineEdit->setGeometry(QRect(280, 60, 113, 24));
        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(280, 90, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 60, 91, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 90, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        AddContactClicked->raise();
        removeContact->raise();
        addContact->raise();
        nameLineEdit->raise();
        contactsTable->raise();
        phoneLineEdit->raise();
        emailLineEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AddContactClicked->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        addContact->setText(QCoreApplication::translate("MainWindow", "Add Contact", nullptr));
        removeContact->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem = contactsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = contactsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Phone:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = contactsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Phone Number:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Email:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
