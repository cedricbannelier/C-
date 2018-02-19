#ifndef JEU_H
#define JEU_H

#include "joueur.h"
#include "manche.h"

class Manche;

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

        Joueur * j1;
        Joueur * j2;
        int typeJeu;

    protected:

    private:
        Manche * manche;


};

#endif // JEU_H
