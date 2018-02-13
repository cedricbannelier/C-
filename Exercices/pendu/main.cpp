#include <iostream>
#include <fstream>
#include <string>
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
    string choixLettreJoueur;
    string lignelue;
    int i = 0;
    nombreAleatoire = rand()%(borneMax-borneMin+1)+borneMin;

    string tableau[10];
    std::fstream file("pendu.txt", std::fstream::in);

    while(getline(file, lignelue))
    {
        tableau[i]=lignelue;
        i++;
    }

    //Selection d'un mot aléatoire
    std::string motADevenier = tableau[nombreAleatoire];
    cout << "*** TEST *** Le mot a devenier : " << motADevenier << "\n" << endl;
    motADevenier.c_str();

    //Joueur rentre une lettre
    cout << "Merci de choisir une lettre : ";
    cin >> choixLettreJoueur;
    choixLettreJoueur.find(choixLettreJoueur);

    return 0;
}
