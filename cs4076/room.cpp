#include "room.h"
#include <map>
#include <string>
#include <iostream>
#include "initgame.h"
using namespace std;
using std::vector;


Room::Room()
{

}

Room::Room(QString description, bool locked)
{
    this->description = description;
    this->locked = locked;
}

void Room::setExits(Room *north, Room *east, Room *south, Room *west)
{
    if (north != NULL)
        exits["north"] = north;
    if (east != NULL)
        exits["east"] = east;
    if (south != NULL)
        exits["south"] = south;
    if (west != NULL)
        exits["west"] = west;
}

QString Room::exitString()
{
    QString returnString = "";
    for (map<QString, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        // Loop through map
        returnString += "  " + i->first;	// access the "first" element of the pair (direction as a string)
    return returnString;
}

Room* Room::nextRoom(QString direction) {
    map<QString, Room*>::iterator next = exits.find(direction); //returns an iterator for the "pair"
    if (next == exits.end())
        return NULL; // if exits.end() was returned, there's no room in that direction.
    return next->second; // If there is a room, remove the "second" (Room*)
                // part of the "pair" (<string, Room*>) and return it.
}

void Room::addItems(Items *inItem)
{
    itemsInRoom.push_back(*inItem);
}

void Room::addObjects(Objects *inObj)
{
    objsInRoom.push_back(*inObj);
}

int Room::getNumberOfItemsInRoom()
{
    return Room::itemsInRoom.size();
}

QString Room::getCurrentRoom()
{
    return description;
}

void Room::removeItemFromRoom(int id)
{
    for(unsigned i=0; i<itemsInRoom.size(); i++)
    {
        if(itemsInRoom.at(i).getID()==id)
        {
            itemsInRoom.erase(itemsInRoom.begin()+(i)); //SORRY
        }
    }
}

Items Room::getItemFromRoom(QString desc)
{
    for(unsigned i=0; i<itemsInRoom.size(); i++)
    {
        if(itemsInRoom.at(i).getDesc()==desc)
        {
            return itemsInRoom.at(i);
        }
    }
}

Objects Room::getObjectFromRoom(QString desc)
{
    for(unsigned i=0; i<objsInRoom.size(); i++)
    {
        if(objsInRoom.at(i).getDesc()==desc)
        {
            return objsInRoom.at(i);
        }
    }
}

void Room::unlock()
{
    locked = false;
}

QString Room::getCurrentRoomNS()
{
    return description;
}

