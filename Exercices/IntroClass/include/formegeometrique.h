#ifndef FORMEGEOMETRIQUE_H
#define FORMEGEOMETRIQUE_H


class FormeGeometrique
{
    public:
        FormeGeometrique();
        virtual ~FormeGeometrique();

        int calcPerimetre();
        int calcAire();
    protected:
        int nbCotes;
    private:

};

#endif // FORMEGEOMETRIQUE_H
