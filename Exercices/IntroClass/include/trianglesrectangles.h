#ifndef TRIANGLESRECTANGLES_H
#define TRIANGLESRECTANGLES_H

#include "triangles.h"

class TrianglesRectangles : public Triangles
{
    public:
        TrianglesRectangles();
        virtual ~TrianglesRectangles();

        void setAngle(int val);
        int getAngle();

    protected:
        int angle;

    private:
};

#endif // TRIANGLESRECTANGLES_H
