#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    fstream file;
    string chaine;

    file.open("fichier.txt", fstream::in | fstream::out);

    getline(file, chaine);

    if (chaine.length() == 0)
    {
        cin >> chaine;
        file.clear(); //Passage de lecture à ecriture
        file << chaine;
    }
    else
    {
        //Inverser le mot
        std::reverse(chaine.begin(), chaine.end());

        cout << "Chaine lue : " << chaine << endl;
    }
    file.close();

    return 0;
}
