#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    std::list<int> listeATrier;
    int test;
    srand(time(NULL));

    for(unsigned i = 1; i <= 10; i++)
    {
        listeATrier.push_back(rand()%100);
    }

    for(std::list<int>::iterator it=listeATrier.begin(); it !=listeATrier.end(); ++it)
    {
        std::cout<< ' ' << *it;

    }
/*
    while (!listeATrier.empty())
    {
        cout << " " << listeATrier.front();
        listeATrier.pop_front();
    }
*/
    return 0;
}
