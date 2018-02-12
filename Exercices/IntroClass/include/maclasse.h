#ifndef MACLASSE_H
#define MACLASSE_H


class MaClasse
{
    public:
        MaClasse();
        MaClasse(int p_maVar);
        virtual ~MaClasse();

        void maMethode(int monParam);


    protected:

    private:
        int maVar;

};

#endif // MACLASSE_H
