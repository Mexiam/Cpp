//
// Created by CHAUVEAU Maxime on 14/03/2023.
//

#ifndef TP8_C_VEHICULEGAZ_H
#define TP8_C_VEHICULEGAZ_H
#include "point.h"
#include "Vehicule.h"
#include <string>
using namespace std;


class VehiculeGaz : public Vehicule{
private:
    int toxane;
public:
    void setToxane(int toxane){
        this->toxane=toxane;
    }
    int getToxane(){
        return toxane;
    }
    VehiculeGaz(){
        setToxane(0);
        //cout <<"initialisation classe vehiculegaz"<<endl;
        //cout << this<<endl;
    }
    VehiculeGaz(Point p, string name, int carb, int cons, int octane) : Vehicule(p, name, carb, cons){
        setToxane(octane);
        if(getToxane()>95){
            setConsomation(getConsomation()*(getToxane()-1)/100);
        }
        //cout<< "Initialisation classe vehicule"<<endl;
        //cout << this <<endl;
    }
    ~VehiculeGaz(){
        //cout << "Nom de classe  : VehiculeGaz"<<endl;
    }
    VehiculeGaz(VehiculeGaz& V) : toxane(V.getToxane()), Vehicule(V){}

    void affichage(){
        Vehicule::affichage();
        cout << "octane : " << toxane<<endl;
    }
    void octaneRatingConsumptionTestsWithUpcast(){
        VehiculeGaz gasVehicle95(Point(0,0), "XY-358-PQ", 30, 5, 95);
        VehiculeGaz gasVehicle98(Point(0,0), "HD-888-ZY", 30, 5, 98);
        vector<Vehicule*> vehicles = { &gasVehicle95, &gasVehicle98 };
        octaneRatingConsumptionTestsWithUpcast(vehicles);
    }
};


#endif //TP8_C_VEHICULEGAZ_H
