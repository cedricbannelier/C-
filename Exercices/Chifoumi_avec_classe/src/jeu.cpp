#include <iostream>
#include "jeu.h"
#include "joueur.h"
#include "humain.h"
#include "ia.h"

using namespace std;

Jeu::Jeu()
{
    //ctor
    cout << "Bienvenue dans le jeu chifoumi" << endl;
    cout << "1) Humain vs IA" << endl;
    cout << "2) Humain vs Humain" << endl;
    cout << "3) IA vs IA" << endl;
    cin >> this->typeJeu;

    switch(this->typeJeu)
    {
    case 1 :
        j1 = new Humain();
        j2 = new Ia();
        break;
    case 2 :
        j1 = new Humain();
        j2 = new Humain();
        break;
    case 3 :
        j1 = new Ia();
        j2 = new Ia();
        break;
    }

    manche = new Manche();
    manche->chiFouMi = this;
    manche->start();
}

Jeu::~Jeu()
{
    //dtor
}
