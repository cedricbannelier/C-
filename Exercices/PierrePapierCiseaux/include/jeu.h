#ifndef JEU_H
#define JEU_H

#include "perso.h"
<<<<<<< HEAD
#include "combat.h"
=======
>>>>>>> f1b97641ff28d7549f4c5623f01f6c71e52b7d26

class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

    protected:

    private:
        Perso * joueur;
        Perso * ennemi;
        int cptEnnemi = 0;

        bool jeuTermine();

        Combat * rencontre;

};

#endif // JEU_H
