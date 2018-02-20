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
    void on_btn0_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btnPlus_clicked();
    void on_btnMoins_clicked();
    void on_btnMultiplier_clicked();
    void on_btnDiviser_clicked();
    void on_btnEgal_clicked();
    void on_btnRas_clicked();


private:
    Ui::MainWindow *ui;
    void clicBtn(int numBtn);
    void clicOperateur(char operateur);

    char operateur;
    int nbMen;
};

#endif // MAINWINDOW_H
