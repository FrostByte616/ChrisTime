#include "inventory.h"
#include "items.h"


Inventory::Inventory()
{
    Items inventory [20];
    for(int i = 0; i < 20; i++)
        inventory[i] = Items("Empty", 0);
}

void Inventory::addItem(Items item)
{
    bool added = false;

    while(added==false)
    {
        for(int i = 0; i < 20; i++)
        {
            if(inventory[i].getID()==0)
            {
                inventory[i]=item;
                added = true;
                break;
            }
        }
    }
}

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
