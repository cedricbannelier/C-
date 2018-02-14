#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    //Déclaration de pile et de la file
    stack <int> pile;
    queue <int> file;

    //Ajout d'un chiffre dans la pile et la file
    for (int i = 1; i <= 10; ++i)
    {
        pile.push(i);
        file.push(i);
    }

    //Pop de la pile
    cout << "Pop de la pile" << endl;
    while (!pile.empty())
    {
        cout << " " << pile.top();
        pile.pop();
    }

    cout << "\n";

    //Pop de la file
    cout << "\nPop de la file" << endl;
    while (!file.empty())
    {
        cout << " " << file.front();
        file.pop();
    }
    cout << "\n";
    return 0;
}
