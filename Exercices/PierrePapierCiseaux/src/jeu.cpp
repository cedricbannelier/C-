#include "jeu.h"

#include <iostream>
//Pour le random
#include <stdlib.h>
#include <time.h>

using namespace std;

Jeu::Jeu()
{
    //ctor
    srand(time(NULL));

    //Cr�er le joueur
    joueur = new Perso(10);

    //Cr�er le combat
    this->rencontre = new Combat();
    this->rencontre->setPtrJoueur(this->joueur);

    //Cr�er le premier ennemi
    ennemi = new Perso(3);
    this->rencontre->setPtrEnnemi(this->ennemi);

    while (!jeuTermine())
    {
        //Phase de rencontre avec un ennemi
        this->rencontre->start();

        //Resolution de la phase de rencontre = qui est mort ?
        if (!ennemi->estVivant())
        {
            //On supprime l'ennemi
            delete ennemi;
            //On en recr�e un nouveau
            ennemi = new Perso(3);
            this->rencontre->setPtrEnnemi(this->ennemi);
            cptEnnemi++;
        }
    }
    //Fin du jeu
    delete this->rencontre;
}

Jeu::~Jeu()
{
    //dtor
}

bool Jeu::jeuTermine()
{
    if (!joueur->estVivant() || this->cptEnnemi>=3)
    {
        return true;
    }
    else
    {
        return false;
    }
}








