#ifndef JEU_H
#define JEU_H

#include <string>

class Jeu
{
    public:
        Jeu(std::string nom);
        virtual ~Jeu();
        std::string nom;

        bool joue();

    protected:

    private:
        int chanceGagner = 49;
};

#endif // JEU_H
