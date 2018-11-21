#ifndef ITEMS_H
#define ITEMS_H

#include <QString>


class Items
{

protected:
    QString description;
    int id;

public:
    Items();
    ~Items();
    Items(QString description, int id);
    QString getDesc();
    int getID();
};

#endif // ITEMS_H
