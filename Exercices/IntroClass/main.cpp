#include <iostream>
#include "carrees.h"
#include "rectangles.h"
#include "triangles.h"
#include "trianglesisocelerectangles.h"

using namespace std;

int main()
{
    Carrees * monQb = new Carrees();
    Rectangles * monR = monQb;

    monQb->setCote(10);
    cout << "Aire : " << monQb->calcAire() << " " << "Perimetre : " << monQb->calcPerimetre() << endl;

    monR->setLargeur(5);
    monR->setLongueur(10);

    cout << "Aire : " << monR->calcAire() << " " << "Perimetre : " << monR->calcPerimetre() << endl;

    delete monQb;
    delete monR;

    return 0;
}
