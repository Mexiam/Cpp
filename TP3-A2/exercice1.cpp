//
// Created by CHAUVEAU Maxime on 06/12/2022.
//

#include "exercice1.h"
#include <cstring>
using namespace std;

int Personnage::count=0;
Personnage::Personnage() {
    name= new char[30];
    strcpy(name,"Pepito");
    PV = 500;
    positionX=50;
    positionY=50;
    compteur();
}
Personnage::Personnage(int PV) {
    name= new char[30];
    strcpy(name,"Florent");
    this->PV=PV;
    positionX=50000000;
    positionY=1;
}
Personnage::Personnage(int x, int y) {
    name= new char[30];
    strcpy(name,"Vincent");
    PV=500;
    positionX=x;
    positionY=y;
}
Personnage::Personnage(char* n) {
    name= new char[30];
    strcpy(name,n);
    PV=500;
    positionX=500;
    positionY=500;
}
Personnage::Personnage(const Arme& weapon) {
    name= new char[30];
    strcpy(name,"Pepito");
    PV = 500;
    positionX=50;
    positionY=50;
    arme=weapon;
}
Arme::Arme(const Arme& weapon) {
    cout << "Copy weapon" << endl;
    damages=weapon.damages;
    setName(weapon.name);
}
Personnage::Personnage(const Personnage& newPerson){
    setName(newPerson.name);
    PV=newPerson.PV;
    positionX=newPerson.positionX;
    positionY=newPerson.positionY;
    arme=newPerson.arme;
}
Personnage::~Personnage() {
    delete[] name;
}
Arme::Arme() {
    name=new char[30];
    strcpy(name,"grosseEpee");
    damages=50;
}
Arme::Arme(int n) {
    name=new char[30];
    strcpy(name,"grosseEpee");
    damages=n;
}
Arme::~Arme(){
    delete[] name;
}

char* Personnage::getName() {
    return name;
}
char* Arme::getName() {
    return name;
}

int Arme::getDamages() {
    if(damages>0){
        return damages;
    } else{
        return 0;
    }
}
int Personnage::getPV() {
    return PV;
}
int Personnage::getPosX() {
    return positionX;
}
int Personnage::getPosY() {
    return positionY;
}

void Personnage::setPosX(int n) {
    positionX=n;
}

void Personnage::setPosY(int n) {
    positionY=n;
}

void Arme::setName(char *n) {
    name=new char[30];
    strcpy(name,n);
}
void Personnage::setPV(int n) {
    if(n>0){
        PV=n;
    }else{
        live= false;
    }
}
void Personnage::returnAttributes() {
    cout << "---------------------------------------"<<endl;
    cout << "nom de personnage par défaut: " << getName() << endl;
    cout << "PV par défaut: " << PV << endl;
    cout << "position par défaut: x=" << positionX <<" y=" << positionY <<endl;
    cout << "Arme du joueur: " << arme.getName() <<endl;
    cout << "---------------------------------------"<<endl;

}
void Arme::returnAttributes() {
    cout << "nom de arme par défaut: " << name << endl;
}

void Personnage::attack(Personnage* target) {
    if(arme.getDamages()>0){
        target->setPV(target->PV-arme.getDamages());
    }
}

void Personnage::moove(int x, int y) {
    setPosX(getPosX()+x);
    setPosY(getPosY()+y);
}

void Personnage::compteur() {
    count++;
}

int Personnage::getCount() {
    return count;
}