#include <iostream>
#include "Compteur.h"
#include "unistd.h"

using namespace std;


Compteur::Compteur(int id_): compte(0),id(id_){};

int Compteur::getcompte(){
    return compte;
}

void Compteur::increment(){
    compte++;
}

int Compteur::getID(){
    return id;
}
Compteur::~Compteur(){}
