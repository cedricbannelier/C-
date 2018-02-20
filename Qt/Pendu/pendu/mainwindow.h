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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_valider_clicked();

private:
    Ui::MainWindow *ui;

    QString motSecret;
    QString motSecretAffiche;
};

#endif // MAINWINDOW_H
