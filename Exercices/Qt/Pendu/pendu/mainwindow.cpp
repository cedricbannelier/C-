#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Choisir le mot secret
    motSecret = "Tototo";
    motSecret = motSecret.toLower();

    //Convertir en tirets
    for (int i = 0; i < motSecret.length(); i++)
    {
        motSecretAffiche += "-";
    }

    ui->lblMotSecret->setText(motSecretAffiche);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_valider_clicked()
{
    QString caractere = ui->lineEdit->text();
    int carPos = 0;

    do{
        carPos = motSecret.indexOf(caractere, carPos);
        if(carPos>=0)
        {
            motSecretAffiche.replace(carPos, 1 , caractere);
            ui->lblMotSecret->setText(motSecretAffiche);

            carPos++;
        }
    }while(carPos!=-1);

}
