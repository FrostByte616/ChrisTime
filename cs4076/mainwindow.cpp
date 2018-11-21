#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventory.h"
#include "items.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_item_comboBox_currentIndexChanged(const QString &item)
{
    Inventory inv.addToInv(&item);
}
