#include <iostream>
#include "moto.h"
#include "voiture.h"
#include "vehicule.h"

using namespace std;

int main()
{
    Moto suzuki;
    Voiture clio;

    Vehicule * ptr;

    //suzuki.afficheNbRoues();
    //clio.afficheNbRoues();

    ptr = &clio;
    ptr->afficheNbRoues();

    ptr = &suzuki;
    ptr->afficheNbRoues();

    Vehicule::Vroum();
    delete ptr;

    return 0;
}
