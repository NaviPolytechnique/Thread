#ifndef COMPTEUR_H_INCLUDED
#define COMPTEUR_H_INCLUDED



class Compteur  {

    public:
        ~Compteur();
        Compteur(int id_);
        int getcompte();
        void increment();
        int getID();

    private:
        int compte, id;

};


#endif // COMPTEUR_H_INCLUDED
