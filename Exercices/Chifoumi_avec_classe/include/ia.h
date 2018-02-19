#ifndef IA_H
#define IA_H

#include "joueur.h"

class Ia : public Joueur
{
    public:
        Ia();
        virtual ~Ia();

        int joue();

    protected:

    private:
};

#endif // IA_H
