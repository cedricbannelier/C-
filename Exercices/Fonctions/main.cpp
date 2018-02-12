#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int monTableau[10];
int i;

void RemplirLeTableau()
{

    for (i = 0; i < 10; i++)
    {
        monTableau[i]=rand()%100;
    }
}

void AfficherLeTableau()
{
    for (i = 0; i < 10; i++)
    {
        cout << monTableau[i] << endl;
    }
}

int main()
{
    RemplirLeTableau();
    AfficherLeTableau();

    return 0;
}
