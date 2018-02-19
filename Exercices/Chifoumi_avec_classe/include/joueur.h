#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();

        int joue();
        int nbPoints = 0;

    protected:

    private:
};

#endif // JOUEUR_H
