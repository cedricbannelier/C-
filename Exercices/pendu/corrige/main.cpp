#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    string motsDico[10];
    string ligneLue;
    fstream file;
    string motSecret;
    string motSecretAffiche;
    char saisie;
    int flagTrouve = 0;
    int nbChances = 7;
    bool charTrouve;

    //Charger les mots dans le tableau
    file.open("dictionnaire.txt", fstream::in);

    int i = 0;
    while (getline(file, ligneLue) && i<10)
    {
        motsDico[i] = ligneLue;
        i++;
    }

    //S�lection d'un mot au hasard
    srand(time(NULL));
    motSecret = motsDico[rand()%10];

    cout << motSecret << endl;

    //D�but de la partie

    //Construire le mot secret affich�
    for (int j=0; j<motSecret.length(); j++)
    {
        motSecretAffiche.push_back('-');
    }
    cout << motSecretAffiche << endl;

    while ((motSecret != motSecretAffiche) && (nbChances>0))
    {
        //Saisie d'un caract�re
        cout << "Choix de caractere : ";
        cin >> saisie;
        charTrouve = false;

        //Recherche de la pr�sence du caract�re dans le mot
        for (int j=0; j<motSecret.length(); j++)
        {
            if (saisie == motSecret[j])
            {
                //Le caract�re correspond
                //Est ce que le caract�re est d�j� flagg� ?
                /*if ((flagTrouve & (int)pow(2,j)) == false)
                {
                    flagTrouve += pow(2,j);
                }*/
                motSecretAffiche[j] = motSecret[j];
                charTrouve = true;
            }
        }

        if (!charTrouve)
        {
            nbChances--;
            cout << "Il vous reste " << nbChances << " chances" << endl;
        }

        //Reconstruit le mot � l'�cran
        /*for (int j=0; j<motSecret.length(); j++)
        {
            if (flagTrouve & (int)pow(2,j))
            {
                cout << motSecret[j];
            }
            else
            {
                cout << "-";
            }
        }*/
        cout << motSecretAffiche << endl;
    }


    return 0;
}
