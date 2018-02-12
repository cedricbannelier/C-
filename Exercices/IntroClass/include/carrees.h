#ifndef CARREES_H
#define CARREES_H

#include "rectangles.h"

class Carrees : public Rectangles
{
    public:
        Carrees();
        virtual ~Carrees();

        void setCote(int val);
        int getCote();

    protected:

    private:
};

#endif // CARREES_H
