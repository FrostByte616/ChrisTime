#ifndef INITGAME_H
#define INITGAME_H

#include "mainwindow.h"
#include "inventory.h"
#include "items.h"
#include "objects.h"
#include "room.h"


class InitGame
{
public:
    InitGame();

private:
    void createRooms();
    void start();
    Room *currentRoom;
};

#endif // INITGAME_H
