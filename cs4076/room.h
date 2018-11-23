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
    QString static description;
    map<QString, Room*> exits;
    vector <Items> itemsInRoom;
    vector <Objects> objsInRoom;
    bool locked;

public:
    Room();
    Room(QString description, bool locked);
    void unlock();
    void setExits(Room *north, Room *east, Room *south, Room *west);
    Room* nextRoom(QString direction);
    void addItems(Items *inItem);
    void addObjects(Objects *inObj);
    //int isItemInRoom(string inString);
    void removeItemFromRoom(int id);
    int getNumberOfItemsInRoom();
    QString static getCurrentRoom();
    QString getCurrentRoomNS();
    Items getItemFromRoom(QString);
    Objects getObjectFromRoom(QString);
    QString exitString();


};

#endif // ROOM_H
