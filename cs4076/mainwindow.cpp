#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventory.h"
#include "items.h"
#include "initgame.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
#include "mapUI.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    exitStringToBox();
}

void MainWindow::exitStringToBox()
{
   ui->comboBox->clear();
   QString exitsInRoom = InitGame::currentRoom->Room::exitString();
   QStringList exits = exitsInRoom.split(" ");
   for (int i=0; i<exits.length(); i++)
   {
       ui->comboBox->addItem(exits.at(i));
   }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    InitGame::go(*&arg1);
    exitStringToBox();
    ui->label_4->setText(Room::getCurrentRoom());
}


void MainWindow::on_pushButton_clicked()
{
    //popup map ui
}
