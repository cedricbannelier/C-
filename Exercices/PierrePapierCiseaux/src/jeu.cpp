#include "jeu.h"

<<<<<<< HEAD
#include <iostream>
//Pour le random
#include <stdlib.h>
#include <time.h>

using namespace std;

Jeu::Jeu()
{
    //ctor
    srand(time(NULL));

    //Créer le joueur
    joueur = new Perso(10);

    //Créer le combat
    this->rencontre = new Combat();
    this->rencontre->setPtrJoueur(this->joueur);

    //Créer le premier ennemi
    ennemi = new Perso(3);
    this->rencontre->setPtrEnnemi(this->ennemi);
Jeu::Jeu()
{
    //ctor
    //Créer le joueur
    joueur = new Perso(10);
    //Créer le premier ennemi
    ennemi = new Perso(3);

    while (!jeuTermine())
    {
        //Phase de rencontre avec un ennemi

        this->rencontre->start();

        while (joueur->estVivant() && ennemi->estVivant())
        {
            //Phase de combat

            //Choix du joueur

            //Choix de l'ordi

            //Resolution des choix
        }

        //Resolution de la phase de rencontre = qui est mort ?
        if (!ennemi->estVivant())
        {
            //On supprime l'ennemi
            delete ennemi;
            //On en recrée un nouveau
            ennemi = new Perso(3);

            this->rencontre->setPtrEnnemi(this->ennemi);
            cptEnnemi++;
        }
    }
    //Fin du jeu
    delete this->rencontre;

            cptEnnemi++;
        }
    }

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








