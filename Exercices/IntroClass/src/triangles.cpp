#include "triangles.h"

Triangles::Triangles()
{
    //ctor
    nbCotes = 3;
}

Triangles::~Triangles()
{
    //dtor
}

void Triangles::setCote1(int val)
{
    cote1 = val;
}

void Triangles::setCote2(int val)
{
    cote2 = val;
}

void Triangles::setCote3(int val)
{
    cote3 = val;
}
