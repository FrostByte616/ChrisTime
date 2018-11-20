#ifndef ROOM_H
#define ROOM_H

#include "items.h"
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
    QString exitString();

public:
    Room();
    Room(QString description);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    Room* nextRoom(string direction);
    void addItem(Items *inItem);
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);

};

#endif // ROOM_H
