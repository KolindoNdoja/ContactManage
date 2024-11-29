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
    QPushButton *addContactButton;
    QPushButton *pushButton_3;
    QLineEdit *nameLineEdit;
    QTableWidget *contactTableWidget;
    QLineEdit *phoneLineEdit;
    QLineEdit *emailLineEdit;
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
        AddContactClicked->setGeometry(QRect(490, 20, 80, 24));
        addContactButton = new QPushButton(centralwidget);
        addContactButton->setObjectName("addContactButton");
        addContactButton->setGeometry(QRect(450, 100, 80, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(580, 90, 80, 24));
        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(280, 30, 113, 24));
        contactTableWidget = new QTableWidget(centralwidget);
        contactTableWidget->setObjectName("contactTableWidget");
        contactTableWidget->setGeometry(QRect(280, 130, 256, 192));
        phoneLineEdit = new QLineEdit(centralwidget);
        phoneLineEdit->setObjectName("phoneLineEdit");
        phoneLineEdit->setGeometry(QRect(280, 60, 113, 24));
        emailLineEdit = new QLineEdit(centralwidget);
        emailLineEdit->setObjectName("emailLineEdit");
        emailLineEdit->setGeometry(QRect(270, 90, 113, 24));
        MainWindow->setCentralWidget(centralwidget);
        AddContactClicked->raise();
        pushButton_3->raise();
        addContactButton->raise();
        nameLineEdit->raise();
        contactTableWidget->raise();
        phoneLineEdit->raise();
        emailLineEdit->raise();
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
        addContactButton->setText(QCoreApplication::translate("MainWindow", "Add Contact", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
