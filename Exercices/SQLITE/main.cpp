#include <iostream>
#include "database.h"
#include <vector>
#include "produit.h"

using namespace std;

int main()
{
    database bdd;
    bdd.openDatabase();

    bdd.executeQuery("CREATE TABLE IF NOT EXISTS produits (nom TEXT, prix FLOAT, qtevendue INT)");
/*
    bdd.insertProduit("Banane", 1.3, 10);
    bdd.insertProduit("Avocat", 2.5, 1);
    bdd.insertProduit("Tomate", 1., 666);
*/

    std::vector<Produit*>* produits = bdd.getAllProduits();
    for (int i = 0; i <produits->size(); i++)
    {
        std::cout << (*produits)[i]->nom << " " << (*produits)[i]->prix << std::endl;
    }

    (*produits)[0]->nom = "Toto";
    bdd.updateProduit((*produits)[0]);

//    bdd.supprimerProduit(3);

//    bdd.majProduit("Avocat",4);

    bdd.closeDatabase();

    return 0;
}
