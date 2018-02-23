#ifndef DATABASE_H
#define DATABASE_H

#include "../sqlite3.h"
#include <string>
#include <vector>
#include "produit.h"

class database
{
    public:
        database();
        virtual ~database();

        void openDatabase();
        void closeDatabase();
        bool executeQuery(std::string query);

        bool insertProduit(std::string nom, float prix, int qtevendue);

        bool supprimerProduit(int id);

        bool majProduit(std::string nom, int id);

        bool updateProduit(Produit* produit);

        std::vector<Produit*>* getAllProduits();
    protected:

    private:
        sqlite3 * db;
        std::string dbfile;
};

#endif // DATABASE_H
