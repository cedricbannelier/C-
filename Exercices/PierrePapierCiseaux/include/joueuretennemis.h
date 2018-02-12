#ifndef JOUEURETENNEMIS_H
#define JOUEURETENNEMIS_H


class JoueurEtEnnemis
{
    public:
        JoueurEtEnnemis();
        JoueurEtEnnemis(int pointDeVie);
        virtual ~JoueurEtEnnemis();

        void setPointDeVie();
        int getPointDeVie();
        int perdPv();

    protected:
        int pointVie;

    private:
        int pdV;
        int choix;
};

#endif // JOUEURETENNEMIS_H
