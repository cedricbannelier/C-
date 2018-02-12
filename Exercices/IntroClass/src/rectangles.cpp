#include "rectangles.h"

Rectangles::Rectangles()
{
    //ctor
}

Rectangles::~Rectangles()
{
    //dtor
}

void Rectangles::setLongueur(int val)
{
    cote1 = val;
    cote2 = val;
}

void Rectangles::setLargeur(int val)
{
    cote3 = val;
    cote4 = val;
}


int Rectangles::getLongueur()
{
    return cote1;
}

int Rectangles::getLargeur()
{
    return cote2;
}

int Rectangles::calcAire()
{
    return getLongueur()*getLargeur();
}
