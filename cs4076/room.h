#ifndef ROOM_H
#define ROOM_H

#include "items.h"
#include "objects.h"
#include <QString>
#include <string>
#include <map>
#include <vector>
#include <iostream>
using namespace std;
using std::vector;


class Room
{
private:
    QString description;
    map<QString, Room*> exits;
    vector <Items> itemsInRoom;
    vector <Objects> objsInRoom;

public:
    Room();
    Room(QString description);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    Room* nextRoom(QString direction);
    void addItems(Items *inItem);
    void addObjects(Objects *inObj);
    //int isItemInRoom(string inString);
    void removeItemFromRoom(int id);
    int getNumberOfItemsInRoom();
    QString static getCurrentRoom();
    Items getItemFromRoom(QString);
    Objects getObjectFromRoom(QString);
    QString exitString();


};

#endif // ROOM_H
