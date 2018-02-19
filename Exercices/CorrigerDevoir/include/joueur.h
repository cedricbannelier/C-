#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>

class Joueur
{
    public:
        Joueur();
        Joueur(std::string nom);
        virtual ~Joueur();

        int nbJetons = 100;
        std::string nom;

        int choixJeu;
        int miseJoueur;

    protected:

    private:
};

#endif // JOUEUR_H
