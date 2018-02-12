#ifndef QUADRILATERES_H
#define QUADRILATERES_H

#include "formegeometrique.h"

class Quadrilateres : public FormeGeometrique
{
    public:
        Quadrilateres();
        virtual ~Quadrilateres();

        int calcPerimetre();

    protected:
        int cote1, cote2, cote3, cote4;

    private:
};

#endif // QUADRILATERES_H
