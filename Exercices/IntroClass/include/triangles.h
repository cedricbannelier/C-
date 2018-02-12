#ifndef TRIANGLES_H
#define TRIANGLES_H

#include "formegeometrique.h"

class Triangles : public FormeGeometrique
{
    public:
        Triangles();
        virtual ~Triangles();

        void setCote1(int val);
        void setCote2(int val);
        void setCote3(int val);
        int getCote1();
        int getCote2();
        int getCote3();

    protected:
        int cote1, cote2, cote3;

    private:
};

#endif // TRIANGLES_H
