#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    unsigned int nbBouteille = 99;

    std::fstream file;
    file.open ("test.txt", std::fstream::in | std::fstream::out);
    file << "aaaaa" << endl;
    while (nbBouteille > 0)
    {
        if (nbBouteille > 1)
        {
            file << nbBouteille << " bouteilles de biere sur un mur" << endl;
            file << nbBouteille << " bouteilles de biere" << endl;
            file << nbBouteille << " Et on en descend une !\n" << endl;
            nbBouteille--;
        }
        else
        {
            file << nbBouteille << " bouteille de biere sur un mur" << endl;
            file << nbBouteille << " bouteille de biere" << endl;
            file << nbBouteille << " Et on en descend une !\n" << endl;
            nbBouteille--;
        }
    }
    file.close();
}
