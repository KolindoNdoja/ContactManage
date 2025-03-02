#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include "contactmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addContactButton_clicked();
    void on_removeContactButton_clicked();

private:
    Ui::MainWindow *ui;
    ContactManager* contactManager;

    void loadContacts();
};

#endif
