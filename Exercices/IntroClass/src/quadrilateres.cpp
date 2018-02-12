#include "quadrilateres.h"

Quadrilateres::Quadrilateres()
{
    //ctor
    this->nbCotes = 4;
}

Quadrilateres::~Quadrilateres()
{
    //dtor
}

int Quadrilateres::calcPerimetre()
{
    return cote1+cote2+cote3+cote4;
}
