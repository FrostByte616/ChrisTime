#include "objects.h"

Objects::Objects()
{

}

Objects::Objects(QString description, int id)
{
    this->description = description;
    this->id = id;
}

void Objects::findUse(int itemID)
{
    if(itemID == id && used == false)
    {
        switch(itemID)
        {
        case 0 : id = 0; break;
        case 1 : id = 0; break;
        case 2 : id = 0; break;
        case 3 : id = 0; break;
        case 4 : id = 0; break;
        case 5 : id = 0; break;
        case 6 : id = 0; break;
        case 7 : id = 0; break;
        case 8 : id = 0; break;
        case 9 : id = 0; break;
        case 10 : id = 0; break;
        case 11 : id = 0; break;
        case 12 : id = 0; break;
        case 13 : id = 0; break;
        case 14 : id = 0; break;
        case 15 : id = 0; break;
        case 16 : id = 0; break;
        case 17 : id = 0; break;
        case 18 : id = 0; break;
        case 19 : id = 0; break;
        case 20 : id = 0; break;
        }
    }
    else if(itemID == id && used == true)
    {

    }
    else
    {

    }
}
