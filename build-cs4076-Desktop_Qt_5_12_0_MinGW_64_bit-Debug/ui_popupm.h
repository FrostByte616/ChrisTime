/********************************************************************************
** Form generated from reading UI file 'popupm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPM_H
#define UI_POPUPM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_popupM
{
public:
    QLabel *label_picture;

    void setupUi(QDialog *popupM)
    {
        if (popupM->objectName().isEmpty())
            popupM->setObjectName(QString::fromUtf8("popupM"));
        popupM->resize(400, 300);
        label_picture = new QLabel(popupM);
        label_picture->setObjectName(QString::fromUtf8("label_picture"));
        label_picture->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(popupM);

        QMetaObject::connectSlotsByName(popupM);
    } // setupUi

    void retranslateUi(QDialog *popupM)
    {
        popupM->setWindowTitle(QApplication::translate("popupM", "Dialog", nullptr));
        label_picture->setText(QApplication::translate("popupM", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popupM: public Ui_popupM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPM_H
