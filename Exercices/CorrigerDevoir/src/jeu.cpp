#include "jeu.h"
#include <stdlib.h>

Jeu::Jeu(std::string nom)
{
    //ctor
    this->nom = nom;
}

Jeu::~Jeu()
{
    //dtor
}

bool Jeu::joue()
{
    if ((rand()%100) < this->chanceGagner)
    {
        return true;
    }
    else
    {
        return false;
    }
}
