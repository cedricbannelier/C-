#ifndef CASINO_H
#define CASINO_H

#include "joueur.h"
#include "jeu.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Casino
{
    public:
        Casino();
        virtual ~Casino();

        Joueur * player;
        std::vector<Jeu*> jeux;
    protected:

    private:
        std::string fsauvegarde = "save.log";
        std::fstream file;

        void sauvePartie();
        bool chargePartie();
        void choixJeu();
        void menu();
};

#endif // CASINO_H
