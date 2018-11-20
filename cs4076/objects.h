#ifndef OBJECTS_H
#define OBJECTS_H

#include <QString>
#include "items.h"


class Objects : public Items
{
private:
    bool used;

public:
    Objects();
    void findUse(int itemID);

};

#endif // OBJECTS_H
