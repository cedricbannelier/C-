#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

class Produit
{
    public:
        Produit();
        virtual ~Produit();

        int id;
        std::string nom;
        float prix;
        int qtevendue;

    protected:

    private:
};

#endif // PRODUIT_H
