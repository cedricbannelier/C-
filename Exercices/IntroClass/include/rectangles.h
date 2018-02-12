#ifndef RECTANGLES_H
#define RECTANGLES_H

#include "quadrilateres.h"

class Rectangles : public Quadrilateres
{
    public:
        Rectangles();
        virtual ~Rectangles();

        void setLongueur(int val);
        void setLargeur(int val);
        int getLongueur();
        int getLargeur();

        int calcAire();

    protected:

    private:
};

#endif // RECTANGLES_H
