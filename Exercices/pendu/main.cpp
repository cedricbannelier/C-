#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int nombreAleatoire;
    int borneMin = 1;
    int borneMax = 10;
    string motADeviner;
    string lettreAsotcker[motADeviner.length()];
    string lignelue;
    char choixLettreJoueur;
    int i = 0;
    nombreAleatoire = rand()%(borneMax-borneMin+1)+borneMin;
    int nombreEssaie = 10;

    string tableau[10];
    std::fstream file("pendu.txt", std::fstream::in);

    while(getline(file, lignelue))
    {
        tableau[i]=lignelue;
        i++;
    }

    //Selection d'un mot aléatoire
    motADeviner = tableau[nombreAleatoire];

    cout << "*** TEST *** Le mot a devenier : " << motADeviner << "\n" << endl;

            cout << "Vous avez : " << nombreEssaie;
        cout << "Merci de choisir une lettre : ";
        cin >> choixLettreJoueur;

        for (int j=0; j<motADeviner.length(); j++)
        {
            if(choixLettreJoueur == motADeviner[j])
            {
                cout << motADeviner[j];
            }
            else
            {
                cout << "-";
            }
        }



    return 0;
}

//    if (motADeviner.find(choixLettreJoueur)!=string::npos)
//    {
//        Au moins une occurrence
//        cout << "trouvé";
//    }
//    else
//    {
//        Pas d'occurrence
//        cout << "fail";
//    }

