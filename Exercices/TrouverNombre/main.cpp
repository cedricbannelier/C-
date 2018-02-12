#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int Rejouer (int valeurDeLutilisateur)
{
    int rejouer = 1;
    cout << "Voulez vous rejouer ? (1 : Rejouer | 0 : Stoper)" << endl;
    cin >> rejouer;
    if (rejouer == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    srand (time(NULL));

    int nombreADeviner = rand()%100;
    int choixDeLutilisateur = 0;
    int nombreDeChance = 7;
    int rejouer = 1;

    cout << "Bienvenue dans le jeu" << endl;
    cout << "*** Trouver le nombre ***\n" << endl;

    while(rejouer == 1)
    {
        nombreDeChance = 7;
        rejouer = 1;

        while ((nombreADeviner != choixDeLutilisateur) && (nombreDeChance > 0))
        {
            nombreDeChance--;

            cout << "Pour test le nombre est : " << nombreADeviner << endl;
            cout << "Merci de choisir un nombre entre 0 et 100\n" << endl;
            cin >> choixDeLutilisateur;

            if (nombreDeChance == 0)
            {
                cout << "Vous avez perdu !!" << endl;
                int a = Rejouer(utilisateur);

            }
            else if(nombreADeviner > choixDeLutilisateur)
            {
                cout << "C'est plus grand !!" << endl;
            }
            else if((nombreADeviner < choixDeLutilisateur))
            {
                cout << "C'est plus petit !!" << endl;
            }
            else
            {
                cout << "Vous avez gagne !!" << endl;
                cout << "vous avez trouve en " << nombreDeChance << "coup(s)" << endl;
            }
        }
    }
    return 0;
}
