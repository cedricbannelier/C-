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
<<<<<<< HEAD
        int choix;
=======
>>>>>>> f1b97641ff28d7549f4c5623f01f6c71e52b7d26

    protected:

    private:
        int pdv;
<<<<<<< HEAD
=======
        int choix;
>>>>>>> f1b97641ff28d7549f4c5623f01f6c71e52b7d26
};

#endif // PERSO_H
