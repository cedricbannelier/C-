#include "carrees.h"

Carrees::Carrees()
{
    //ctor
}

Carrees::~Carrees()
{
    //dtor
}

void Carrees::setCote(int val)
{
    //cote1 = val;
    setLongueur(val);
    setLargeur(val);
}

int Carrees::getCote()
{
    return getLongueur();
}


