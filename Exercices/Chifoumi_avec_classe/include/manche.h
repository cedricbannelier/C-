#ifndef MANCHE_H
#define MANCHE_H

#include "jeu.h"

class Jeu;

class Manche
{
    public:
        Manche();
        virtual ~Manche();

        void start();

        Jeu * chiFouMi;;
    protected:

    private:

};

#endif // MANCHE_H
