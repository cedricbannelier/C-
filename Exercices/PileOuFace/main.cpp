#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <iterator>

#include "joueur.h"

using namespace std;

//Le joueur choisit pile ou face
void choix(Joueur * ptr)
{
    ptr->choix = rand()%2;
}

int main()
{
    srand(time(NULL));

    vector<Joueur*> mesJoueurs;
    vector<Joueur*>::iterator it;
    int nbJ;
    int jetPiece;
    bool gagne = false;

    //Choisir entre 2 et 10 joueurs
    do
    {
        cout << "Nombre de joueurs : ";
        cin >> nbJ;
    }
    while(nbJ<2 || nbJ>10);

    //Remplir le vecteur
    for (int i =0; i<nbJ; i++)
    {
        mesJoueurs.push_back(new Joueur());
    }

        for (unsigned i = 0; i<3; i++)
    {
        cout << mesJoueurs[i] << endl;
    }

    //On continue la partie tant que personne n'a gagn�
    while(true)
    {
        //Chaque joueur choisit pile ou face


        for (it = mesJoueurs.begin(); it !=mesJoueurs.end(); ++it)
        {
            //Version fonction
            choix(*it);
            //Version methode
            //mesJoueurs[i]->choisirPF();
        }

        //On lance la pi�ce
        jetPiece = rand()%2;

        //On compare et on attribue des points
        for (int i=0; i<mesJoueurs.size(); i++)
        {
            if (mesJoueurs[i]->choix == jetPiece)
            {
                mesJoueurs[i]->score++;
                if (mesJoueurs[i]->score>=5) {
                    gagne=true;
                }
            }
        }

        if (gagne)
        {
            break;
        }
    }

    return 0;
}
