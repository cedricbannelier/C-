#include "joueur.h"

#include <iostream>

Joueur::Joueur()
{
    //ctor
    //Demander le nom du joueur
    std::cout << "Quel est votre nom ?" << std::endl;
    std::cin >> nom;
}

Joueur::Joueur(std::string nom)
{
    //ctor
    this->nom = nom;
}

Joueur::~Joueur()
{
    //dtor
}
