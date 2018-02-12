#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    //int b = 3;
    int *ptr;

    a++;

    cout << a << endl;

    ptr = &a;

    cout << ptr << " " << *ptr << endl;

    *ptr +=1;

    cout << *ptr << endl;

    return 0;
}
