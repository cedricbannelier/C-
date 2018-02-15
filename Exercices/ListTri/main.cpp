#include <iostream>
#include <list>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    std::list<int> listeATrier;
    std:list<int> listeTriee;
    int a;
    srand(time(NULL));

    for(unsigned i = 1; i <= 10; i++)
    {
        listeATrier.push_back(rand()%100);
    }
    cout << "Liste avant tri" << endl;
    for(std::list<int>::iterator it=listeATrier.begin(); it !=listeATrier.end(); ++it)
    {
        std::cout<< ' ' << *it;
    }


    cout << "\n Liste trier" << endl;

    std::list<int>::iterator it=listeATrier.begin();
    for (unsigned i = 0;  i<=9; i++)
    {
        std::advance(it, i);
        std::cout << "Place " << i << " : " << *it << '\n';
    }

    a = * it;

    cout << a;
/*    if((std::advance(it, 1)) == (std::advance(it, 2))
    {
        cout << "Dans le if";
    }
    else
    {
        cout << "Dans le else";
    }
*/




/*
    while (!listeATrier.empty())
    {
        cout << " " << listeATrier.front();
        listeATrier.pop_front();
    }
*/
    return 0;
}
