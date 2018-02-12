#ifndef PERSO_H
#define PERSO_H


class Perso
{
    public:
        Perso();
        Perso(int pdv);
        virtual ~Perso();

        bool estVivant();
        void perdPdv();

    protected:

    private:
        int pdv;
        int choix;
};

#endif // PERSO_H
