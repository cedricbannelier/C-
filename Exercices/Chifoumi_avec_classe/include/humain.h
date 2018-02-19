#ifndef HUMAIN_H
#define HUMAIN_H

#include "joueur.h"

class Humain : public Joueur
{
    public:
        Humain();
        virtual ~Humain();

        int joue();

    protected:

    private:
};

#endif // HUMAIN_H
