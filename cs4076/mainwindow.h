#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    friend class InitGame;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_item_comboBox_activated(const QString &arg1);

    void on_item_comboBox_currentIndexChanged(const QString &arg1);

    void on_exit_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_locationLabel_objectNameChanged(const QString &objectName);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    void exitStringToBox();
};

#endif // MAINWINDOW_H
