#ifndef INITGAME_H
#define INITGAME_H

#include "mainwindow.h"
#include "inventory.h"
#include "items.h"
#include "objects.h"
#include "room.h"
#include <QApplication>


class InitGame
{
public:
    InitGame();
    void start();
    void static createRooms();
    Inventory inv;
    Room static *currentRoom;
    void static go(QString direction);

private:

};

#endif // INITGAME_H
