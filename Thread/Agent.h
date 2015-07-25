#ifndef AGENT_H_INCLUDED
#define AGENT_H_INCLUDED

#include "Runnable.h"
#include "Compteur.h"

class Agent : public Runnable {

    public:
        void* run();
        ~Agent();
        Agent(Compteur *compte_=0);

    private:
        Compteur *compte;


};


#endif // COMPTEUR_H_INCLUDED
