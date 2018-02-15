#ifndef JEU_H
#define JEU_H

#include <joueur.h>
class Jeu
{
    public:
        Jeu();
        virtual ~Jeu();

        void partie();

    protected:

    private:

        Joueur * listeIa;

        bool jeuTermine();
};

#endif // JEU_H
