#include "humain.h"
#include <iostream>

Humain::Humain()
{
    //ctor
}

Humain::~Humain()
{
    //dtor
}

int Humain::joue()
{
    int choix;
    std::cout << "1: Pierre 2: Papier 3: Ciseaux" << std::endl;
    std::cin >> choix;

    return choix;
}
