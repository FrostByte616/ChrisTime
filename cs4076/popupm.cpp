#include "popupm.h"
#include "ui_popupm.h"

popupM::popupM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupM)
{
    ui->setupUi(this);
    QPixmap picture("chrisMap.png");
    int w = ui->label_picture->width();
    int h = ui->label_picture->height();
    ui->label_picture->setPixmap(picture.scaled(w, h, Qt::KeepAspectRatio));

}

popupM::~popupM()
{
    delete ui;
}
