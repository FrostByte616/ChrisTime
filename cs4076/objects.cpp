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
    if(itemID == id)
    {
        switch(itemID)
        {
            case 1 : id = 0; break;
            case 2 : id = 0; break;
        }
    }
    else
    {

    }
}
