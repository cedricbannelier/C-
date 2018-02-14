#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
//  string motsDico[10];
    vector<string> motsDicoVector;
    string ligneLue;
    fstream file;
    string motSecret;
    string motSecretAffiche;
    char saisie;
//    int flagTrouve = 0;
    int nbChances = 7;
    bool charTrouve;

    //Charger les mots dans le tableau
    file.open("dictionnaire.txt", fstream::in);

    while (getline(file, ligneLue))
    {
        motsDicoVector.push_back(ligneLue);
    }
    file.close();

    //Sélection d'un mot au hasard
    srand(time(NULL));
    motSecret = motsDicoVector[rand()%motsDicoVector.size()];

    cout << motSecret << endl;

    //Début de la partie

    //Construire le mot secret affiché
    for (unsigned j=0; j<motSecret.length(); j++)
    {
        motSecretAffiche.push_back('-');
    }
    cout << motSecretAffiche << endl;

    while ((motSecret != motSecretAffiche) && (nbChances>0))
    {
        //Saisie d'un caractère
        cout << "Choix de caractere : ";
        cin >> saisie;
        charTrouve = false;

        //Recherche de la présence du caractère dans le mot
        for (unsigned j=0; j<motSecret.length(); j++)
        {
            if (saisie == motSecret[j])
            {
                //Le caractère correspond
                //Est ce que le caractère est déjà flaggé ?
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

        //Reconstruit le mot à l'écran
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
