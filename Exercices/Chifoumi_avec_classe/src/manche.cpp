#include "manche.h"
#include "humain.h"
#include "ia.h"

#include <iostream>

using namespace std;

Manche::Manche()
{
    //ctor
}

Manche::~Manche()
{
    //dtor
}

void Manche::start()
{
    switch(chiFouMi->typeJeu)
    {
    case 1:
    {
        //On transforme un pointeur de parent vers un pointeur enfant
        Humain * j1 = (Humain*)(chiFouMi->j1);
        Ia * j2 = (Ia*)(chiFouMi->j2);
        cout << "J1 " << j1->joue() << endl;
        cout << "J2 " << j2->joue() << endl;
    }
    break;
    case 2:
    {
        Humain * j1 = (Humain*)(chiFouMi->j1);
        Humain * j2 = (Humain*)(chiFouMi->j2);
        cout << "J1 " << j1->joue() << endl;
        cout << "J2 " << j2->joue() << endl;
    }

    break;
    case 3:
    {
        Ia * j1 = (Ia*)(chiFouMi->j1);
        Ia * j2 = (Ia*)(chiFouMi->j2);
        cout << "J1 " << j1->joue() << endl;
        cout << "J2 " << j2->joue() << endl;
    }

    break;
    }
}
