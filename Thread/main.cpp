#include <iostream>
#include "Compteur.h"
#include "Runnable.h"
#include "Thread.h"
#include "Agent.h"
#include <vector>
#include<memory>
#include <unistd.h>


using namespace std;

int main()
{

        Compteur *n;
        Agent *m;
        Thread *pt;

        for(int i=0; i<20; i++){
            n = new Compteur(i);
            m = new Agent(n);
            pt = new Thread(std::auto_ptr<Runnable>(m), false, Thread::RR,i);
            pt->start();
        }

        //met le thread qui appelle cette fonction en sommeil pendant le nombre de secondes indiqué
        sleep(100);

}
