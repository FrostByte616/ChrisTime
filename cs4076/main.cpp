#include "mainwindow.h"
#include "inventory.h"
#include "items.h"
#include "objects.h"
#include "room.h"
#include "initgame.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    InitGame game;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
