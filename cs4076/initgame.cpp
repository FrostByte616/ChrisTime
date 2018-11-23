#include "initgame.h"

InitGame::InitGame()
{
    start();
}


int main(int argc, char *argv[])
{
    InitGame game;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

void InitGame::createRooms()
{
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

        a = new Room("a", false);
            a->addItems(new Items("Iron Key", 1));
            a->addItems(new Items("y", 2));
        b = new Room("b", true);
            b->addItems(new Items("xx", 3));
            b->addItems(new Items("Iron Key", 4));
        c = new Room("c", false);
            c->addObjects(new Objects("Door", 4));
        d = new Room("d", false);
        e = new Room("e", true);
        f = new Room("f", false);
        g = new Room("g", true);
        h = new Room("h", false);
        i = new Room("i", true);
        j = new Room("Chris Room", true);

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

void InitGame::go(QString direction)
{
    Room* nextRoom = currentRoom->nextRoom(direction);
    {
        currentRoom = nextRoom;
    }
}


