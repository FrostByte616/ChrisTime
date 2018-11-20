#ifndef INVENTORY_H
#define INVENTORY_H

#include "items.h"

class Inventory
{
private:
    Items inventory[20];

public:
    Inventory();
    void addItem(Items item);
    void removeItem(int id);
    void operator = (const Items &Items);
};

#endif // INVENTORY_H
