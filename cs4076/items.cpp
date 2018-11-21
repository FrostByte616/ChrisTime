#include "items.h"

Items::Items()
{

}

Items::~Items()
{

}

Items::Items(QString description, int id)
{
    this->description = description;
    this->id = id;
}

QString Items::getDesc()
{
    return description;
}

int Items::getID()
{
    return id;
}
