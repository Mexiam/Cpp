//
// Created by CHAUVEAU Maxime on 14/03/2023.
//

#ifndef TP8_C_VEHICULE_H
#define TP8_C_VEHICULE_H
#include "point.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Vehicule {
protected:
    string name;
    Point position;
    float carburant;
    float consomation;
public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setPosition(int x, int y){
        position.setX(x);
        position.setY(y);
    }
    int getPositionX(){
        return position.getX();
    }
    int getPositionY(){
        return position.getY();
    }
    void setCarburant(float a){
        this->carburant = a;
    }
    float getCarburant(){
        return carburant;
    }
    void setConsomation(float b){
        this->consomation = b;
    }
    float getConsomation(){
        return consomation;
    }
    Vehicule() : position(0,0){
        setName("default");
        setCarburant(0);
        setConsomation(0);
        //cout<< "Initialisation classe vehicule"<<endl;
        //cout << this <<endl;
    }
    Vehicule(Point p, string name, int carb, int cons) : position(p){
        setName(name);
        setCarburant(carb);
        setConsomation(cons);
        //cout<< "Initialisation classe vehicule"<<endl;
        //cout << this <<endl;
    }
    Vehicule(Vehicule& V);
    virtual ~Vehicule(){
        cout << "Nom de classe : Vehicule" << endl;
    }
    void affichage();
    bool isConsomation(Point P);
    float mooveTo(Point P);
    float mooveTo(int x, int y);
};


#endif //TP8_C_VEHICULE_H
