#ifndef POPUPM_H
#define POPUPM_H

#include <QDialog>

namespace Ui {
class popupM;
}

class popupM : public QDialog
{
    Q_OBJECT

public:
    explicit popupM(QWidget *parent = nullptr);
    ~popupM();

private:
    Ui::popupM *ui;
};

#endif // POPUPM_H
