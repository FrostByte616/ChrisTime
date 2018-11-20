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
    map<QString, Room*>;
    vector <Items> itemsInRoom;

public:
    Room();

};

#endif // ROOM_H
