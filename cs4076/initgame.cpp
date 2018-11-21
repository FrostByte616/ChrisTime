#include "initgame.h"

InitGame::InitGame()
{
    start();
}

void InitGame::createRooms()
{
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

        a = new Room("a");
            a->addItems(new Items("x", 1));
            a->addItems(new Items("y", 2));
        b = new Room("b");
            b->addItems(new Items("xx", 3));
            b->addItems(new Items("Iron Key", 4));
        c = new Room("c");
            c->addObjects(new Objects("Door", 4));
        d = new Room("d");
        e = new Room("e");
        f = new Room("f");
        g = new Room("g");
        h = new Room("h");
        i = new Room("i");
        j = new Room("Chris Room");

    //             (N, E, S, W)
        a->setExits(f, b, d, c);
        b->setExits(NULL, NULL, NULL, a);
        c->setExits(NULL, a, NULL, NULL);
        d->setExits(a, e, NULL, i);
        e->setExits(NULL, NULL, NULL, d);
        f->setExits(NULL, g, a, h);
        g->setExits(NULL, NULL, NULL, f);
        h->setExits(NULL, f, NULL, NULL);
        i->setExits(NULL, d, NULL, NULL);
        j->setExits(NULL, NULL, i, NULL);

            currentRoom = a;
}

void InitGame::start()
{
    createRooms();
    Inventory inv;
    inv.addItem(new Items("Welcome", 20));
}
