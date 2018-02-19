#include "casino.h"

#include <iostream>
#include <stdlib.h>

Casino::Casino()
{
    //ctor
    bool charger = false;

    jeux.push_back(new Jeu("Roulette"));
    jeux.push_back(new Jeu("Craps"));
    jeux.push_back(new Jeu("Blackjack"));

    //Vérifier existence partie en cours, proposer de charger la partie
    charger = this->chargePartie();

    if (!charger)
    {
        //On lance la création d'un joueur
        player = new Joueur();
    }

    std::cout << "Bienvenue " << player->nom << " vous avez " << player->nbJetons << " jetons" << endl;

    this->choixJeu();
}

Casino::~Casino()
{
    //dtor
}

void Casino::choixJeu()
{
    //Lister les jeux disponibles
    for (int i=0; i<jeux.size(); i++)
    {
        cout << i+1 << ") " << jeux[i]->nom << endl;
    }

    //L'utilisateur choisit un jeu
    do
    {
        cout << "Quel jeu choisissez vous ?" << endl;
        cin >> player->choixJeu;
    }
    while ((player->choixJeu<1) || (player->choixJeu>jeux.size()));

    //L'utilisateur choisit sa mise
    do
    {
        cout << "Quelle est votre mise ?" << endl;
        cin >> player->miseJoueur;
    }
    while ((player->miseJoueur<1) || (player->miseJoueur>player->nbJetons));


    //On joue au jeu
    if (jeux[(player->choixJeu-1)]->joue())
    {
        //Gagné
        player->nbJetons += player->miseJoueur;
        cout << "Gagne !" << endl;
    }
    else
    {
        //Perdu
        player->nbJetons -= player->miseJoueur;
        cout << "Perdu !" << endl;
    }

    //Menu d'actions
    this->menu();
}

void Casino::menu()
{
    int choixMenu;

    cout << this->player->nom << " vous avez " << this->player->nbJetons << endl;

    cout << "Que souhaitez-vous faire ?" << endl;
    cout << "1) Sauver" << endl;
    cout << "2) Charger" << endl;
    cout << "3) Rejouer" << endl;
    cout << "4) Quitter" << endl;
    cin >> choixMenu;

    switch (choixMenu)
    {
    case 1:
        this->sauvePartie();
        this->menu();
        break;
    case 2:
        {
            //Supprimer l'ancien joueur
            Joueur * ptrPlayer = this->player;
            if (this->chargePartie())
            {
                delete ptrPlayer;
            }
            this->menu();
        }
        break;
    case 3:
        this->choixJeu();
        break;
    case 4:
        break;
    }
}

void Casino::sauvePartie()
{
    file.open(fsauvegarde.c_str(), std::fstream::out | std::fstream::trunc);
    if (file.is_open()) {
        //file << this->player->nom << ";" << this->player->nbJetons;
        file << this->player->nom << endl << this->player->nbJetons;

        file.close();
    }
    cout << "Partie sauvegardee" << endl;
}

bool Casino::chargePartie()
{
    bool charger=false;

    //Ouvrir le fichier de sauvegarde
    file.open(fsauvegarde.c_str(), std::fstream::in);
    if (file.is_open()) {
        //Lire le flux pour récupérer les informations
        std::string lignelue;
        std::size_t posSeparateur;

        //Nom du joueur
        std::getline(file, lignelue);

        if (lignelue.length())
        {
            char poursuivre;
            //Il y a un nom de joueur dans le fichier
            std::string nomJoueur = lignelue;
            //On récupère ses jetons
            std::getline(file, lignelue);
            std::string ptsJoueur = lignelue;

            std::cout << "Une partie de " << nomJoueur
                << " avec " << ptsJoueur
                << " jetons existe. Voulez vous la poursuivre ?" << endl;
            std::cin >> poursuivre;
            if (poursuivre == 'o' || poursuivre == 'O')
            {
                //Crée un joueur avec ses jetons
                charger = true;
                player = new Joueur(nomJoueur);
                player->nbJetons = atoi(ptsJoueur.c_str());

                cout << "Partie chargee" << endl;
            }
        }

        //Rechercher le séparateur entre NomJoueur;Jetons
        /*posSeparateur = lignelue.find(';');
        if (posSeparateur != std::string::npos)
        {
            //On trouve le séparateur
            std::string nomJoueur = lignelue.substr(0, posSeparateur);
            std::string ptsJoueur = lignelue.substr(posSeparateur+1);
            char poursuivre;

            std::cout << "Une partie de " << nomJoueur
                << " avec " << ptsJoueur
                << " jetons existe. Voulez vous la poursuivre ?" << endl;
            std::cin >> poursuivre;
            if (poursuivre == 'o' || poursuivre == 'O')
            {
                //Crée un joueur avec ses jetons
                charger = true;
                player = new Joueur(nomJoueur);
                player->nbJetons = atoi(ptsJoueur.c_str());

                cout << "Partie chargee" << endl;
            }
        }*/

        file.close();
    }

    return charger;
}











