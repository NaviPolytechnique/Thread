#include <iostream>
#include "Runnable.h"
#include "Agent.h"
#include "unistd.h"

using namespace std;

Agent::Agent(Compteur *compte_){
    compte = compte_;
}


void* Agent::run(){
    while((*compte).getcompte()<1000000){
	int i=0;
        compte->increment();
        //std::cout<< (*compte).getID() << ";" << (*compte).getcompte() << std::endl;
    }

    return 0;
}

Agent::~Agent(){}
