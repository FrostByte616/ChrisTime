#ifndef ROOM_H
#define ROOM_H

#include "items.h"
#include "objects.h"
#include <QString>
#include <map>
#include <vector>
using namespace std;


class Room
{
private:
    QString description;
    map<QString, Room*> exits;
    vector <Items> itemsInRoom;
    vector <Objects> objsInRoom;
    QString exitString();

public:
    Room();
    Room(QString description);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    Room* nextRoom(string direction);
    void addItems(Items *inItem);
    void addObjects(Objects *inObj);
    int isItemInRoom(string inString);
    void removeItemFromRoom(int id);
    int getNumberOfItemsInRoom();
    QString getCurrentRoom();

};

#endif // ROOM_H
