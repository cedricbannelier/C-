#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::clicBtn(int numBtn)
{
    ui->lcdNumber->display(ui->lcdNumber->intValue()*10+numBtn);
}
void MainWindow::on_btn0_clicked()
{
    clicBtn(0);
}
void MainWindow::on_btn1_clicked()
{
    clicBtn(1);
}
void MainWindow::on_btn2_clicked()
{
    clicBtn(2);
}
void MainWindow::on_btn3_clicked()
{
    clicBtn(3);
}
void MainWindow::on_btn4_clicked()
{
    clicBtn(4);
}
void MainWindow::on_btn5_clicked()
{
    clicBtn(5);
}
void MainWindow::on_btn6_clicked()
{
    clicBtn(6);
}
void MainWindow::on_btn7_clicked()
{
    clicBtn(7);
}
void MainWindow::on_btn8_clicked()
{
    clicBtn(8);
}
void MainWindow::on_btn9_clicked()
{
    clicBtn(9);
}
void MainWindow::clicOperateur(char operateur)
{
    this->operateur = operateur;
    this->nbMen = ui->lcdNumber->intValue();
    ui->lcdNumber->display(0);
}


void MainWindow::on_btnPlus_clicked()
{
    clicOperateur('+');
}
void MainWindow::on_btnMoins_clicked()
{
    clicOperateur('-');
}
void MainWindow::on_btnMultiplier_clicked()
{
    clicOperateur('*');
}
void MainWindow::on_btnDiviser_clicked()
{
    clicOperateur('/');
}
void MainWindow::on_btnEgal_clicked()
{
    switch (this->operateur) {
    case '+':
        ui->lcdNumber->display(nbMen + ui->lcdNumber->intValue());
        break;
    case '-':
        ui->lcdNumber->display(nbMen - ui->lcdNumber->intValue());
        break;
    case '*':
        ui->lcdNumber->display(nbMen * ui->lcdNumber->intValue());
        break;
    case '/':
        if(ui->lcdNumber->intValue() != 0)
        {
            ui->lcdNumber->display(nbMen / ui->lcdNumber->intValue());
        }
        else
        {
            ui->lcdNumber->display("Err");
        }
        break;
    default:
        break;
    }

    this->operateur = ' ';
}
void MainWindow::on_btnRas_clicked()
{
    this->operateur = ' ';
    this->nbMen = 0;
    ui->lcdNumber->display(0);
}
