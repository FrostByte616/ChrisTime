#include "inventoryArray.h"
#include "item.h"

Inventory::Inventory()
{
	Item[] inventory = new Item[20];
	for (int i=0; i<20; i++)
		inventory[i]=NULL;

}

void Inventory::addItem(Item item)
{
	int i=0;
	while(i<inventory.size() && inventory[i]!==NULL)
	{
	i++
	}
	if (i<20 && inventory[i]==0)
	inventory[i]=item;
}

void Inventory::removeItem(int id)
{
	Item temp;
	for(int j=0; j<inventory.size(); j++)
	{
		temp = inventory[j];
		if(temp.getID() == id)
			inventory[i]=NULL;
	}
}