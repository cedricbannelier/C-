#include "ia.h"
#include <stdlib.h>

Ia::Ia()
{
    //ctor
}

Ia::~Ia()
{
    //dtor
}

int Ia::joue()
{
    return rand()%3+1;
}
