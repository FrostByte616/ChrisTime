#ifndef ITEMS_H
#define ITEMS_H

#include <QString>


class Items
{

private:
    QString description;
    int id;

public:
    Items();
    Items(QString description, int id);
    QString getDesc();
    int getID();
};

#endif // ITEMS_H
