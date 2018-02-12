#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "joueuretennemis.h"

#define PIERRE 1
#define PAPIER 2
#define CISEAUX 3

using namespace std;

int main()
{
    srand(time(NULL));

    int choixJ, choixPc;

    JoueurEtEnnemis * joueur = new JoueurEtEnnemis(10);
    JoueurEtEnnemis * ennemi = new JoueurEtEnnemis(3);

 //   while ((pvPc > 0) && (pvJ > 0))
    while ((joueur->pointVie > 0) && (ennemi->pointVie > 0))
    {
        //Le Pc choisit
        choixPc = rand()%3+1;

        //Le joueur choisit
        cout << "1: Pierre\n2: Papier\n3: Ciseaux\nVotre choix:" << endl;
        cin >> choixJ;

        //On compare les choix
        switch (choixJ)
        {
        case PIERRE:
            switch (choixPc)
            {
            case PIERRE:
                ennemi->pointVie--;
                joueur->pointVie--;
                break;
            case PAPIER:
                joueur->pointVie--;
                break;
            case CISEAUX:
                ennemi->pointVie--;
                break;
            }
            break;
        case PAPIER:
            switch (choixPc)
            {
            case PIERRE:
                ennemi->pointVie--;
                break;
            case PAPIER:
                ennemi->pointVie--;
                joueur->pointVie--;
                break;
            case CISEAUX:
                joueur->pointVie--;
                break;
            }
            break;
        case CISEAUX:
            switch (choixPc)
            {
            case PIERRE:
                joueur->pointVieJoueur--;
                break;
            case PAPIER:
                ennemi->pointVie--;
                break;
            case CISEAUX:
                ennemi->pointVie--;
                joueur->pointVieJoueur--;
                break;
            }
            break;
        }
    }

    cout << "La partie est terminee\nPV Pc : " << ennemi->pointVieEnnemi << "\nPv Joueur : " << joueur->pointVieJoueur << endl;

    return 0;
}
