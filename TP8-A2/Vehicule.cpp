//
// Created by CHAUVEAU Maxime on 14/03/2023.
//
#include "Vehicule.h"
#include <string>
#include <cmath>
#include <cstring>
void Vehicule::affichage() {
    cout << "-------------------------------------------------------"<<endl;
    cout<< "Nom de la voiture : " <<getName()<<endl;
    cout << "Position de la voiture : " << getPositionX() << ";" <<getPositionY() <<endl;
    cout << "Carburant : " <<getCarburant() << "L | Consomation : " <<getConsomation() <<"l/100km" <<endl;
}

Vehicule::Vehicule(Vehicule &V) : position(V.getPositionX(),V.getPositionY()), carburant(V.getCarburant()), consomation(V.getConsomation()) {
    setName(V.getName());
}

bool Vehicule::isConsomation(Point P) {
    return getCarburant()>= position.distance(P)*getConsomation()/100;
}

float Vehicule::mooveTo(Point P) {
    Point temp(getPositionX(), getPositionY());
    if (isConsomation(P)){
        setPosition(P.getX(),P.getY());
        setCarburant( getCarburant()-temp.distance(P)*getConsomation()/100);
        return temp.distance(P);
    } else{
        float d=100*getCarburant()/getConsomation();
        float r=d/position.distance(P);
        Point M((1-r)*getPositionX()+r*P.getX(), (1-r)*getPositionY()+r*P.getY());
        setPosition(M.getX(),M.getY());
        setCarburant(0);
        return temp.distance(M);
    }
}

float Vehicule::mooveTo(int x, int y) {
    Point P(x, y);
    return mooveTo(P);
}
