#include "room.h"

Room::Room()
{

}

Room::Room(QString description)
{
    this->description = description;
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

QString Room::exitString() {
    QString returnString = "\nexits =";
    for (map<QString, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        // Loop through map
        returnString += "  " + i->first;	// access the "first" element of the pair (direction as a string)
    return returnString;
}
