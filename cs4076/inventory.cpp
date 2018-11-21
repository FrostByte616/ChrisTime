#include "inventory.h"
#include "items.h"
#include "room.h"


Inventory::Inventory()
{
    for(int i = 0; i < 20; i++)
        inventory[i] = Items("Empty", 0);
}

void Inventory::addItem(Items *item)
{
    bool added = false;

    while(added==false)
    {
        for(int i = 0; i < 20; i++)
        {
            if(inventory[i].getID()==0)
            {
                inventory[i]=*item;
                added = true;
                break;
            }
        }
    }
}

/*void Inventory::addToInv(const QString &item)
{
    Items temp;
    for (int i=0; i< Room::getCurrentRoom()::getNumberOfItemsInRoom(); i++)

    addItem(temp);
}
*/
void Inventory::removeItem(int id)
{
    bool removed = false;

    while(removed == false)
    {
        for(int i = 0; i < 20; i++)
        {
            if(inventory[i].getID()==id)
            {
                inventory[i] = Items("Empty", 0);
                for(int j =0; j < 20; j++)
                {
                    if(inventory[j].getID()==0)
                    {
                        Items temp = inventory[j];
                        inventory[j] = inventory[j+1];
                        inventory[j+1] = temp;
                    }
                }
                removed = true;
                break;
            }
        }
    }
}

