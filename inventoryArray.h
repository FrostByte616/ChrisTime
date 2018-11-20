#ifndef INVENTORYARRAY_H
#define INVENTORYARRAY_H
#include "item.h"

class Inventory
{
private:
	Item inventory[20];

public:
	Inventory();
	void addItem(Item item);
    void removeItem(int id);
};

#endif