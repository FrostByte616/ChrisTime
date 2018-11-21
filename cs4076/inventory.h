#ifndef INVENTORY_H
#define INVENTORY_H

#include "items.h"

class Inventory
{
private:
  //  Items inventory[20];

public:
    friend class mainwindow;
    Inventory();
    void addItem(Items item);
    void removeItem(int id);
    void operator = (const Items &Items);
    void addToInv(const QString &item);
    Items inventory[20];

};

#endif // INVENTORY_H
