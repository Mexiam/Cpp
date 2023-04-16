#include "exercice1.h"
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    Personnage pDefault;
    Personnage target;
    Personnage spectate;

    pDefault.attack(&target);
    pDefault.moove(5,-5);
    cout << "Target's PV : " << target.getPV() << endl;
    cout << "pDefault position : "<<pDefault.getPosX() << " / " << pDefault.getPosY() << endl;
    cout << "Players in game : "<< Personnage::getCount() << endl;
    cout <<"is target alive? " << (target.live?"true":"false") << endl;
}