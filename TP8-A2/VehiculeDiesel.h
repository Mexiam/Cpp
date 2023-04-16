//
// Created by CHAUVEAU Maxime on 14/03/2023.
//

#ifndef TP8_C_VEHICULEDIESEL_H
#define TP8_C_VEHICULEDIESEL_H
#include "point.h"
#include "Vehicule.h"
#include <iostream>
#include <string>
using namespace std;


class VehiculeDiesel : public Vehicule{
private:
    bool filtreAParticule;
public:
    void setFiltre(bool filtre){
        this->filtreAParticule = filtre;
    }
    bool getFiltre(){
        return filtreAParticule;
    }
    VehiculeDiesel(){
        setFiltre(true);
        //cout << "Initialisation Vehicule Diesel"<<endl;
        //cout << this<<endl;
    }
    VehiculeDiesel(Point p, string name, int carb, int cons, bool filtre) : Vehicule(p,name,carb,cons){
        setFiltre(filtre);
        //<< "Initialisation classe vehicule"<<endl;
        //cout << this <<endl;
    }
    virtual ~VehiculeDiesel(){
        cout << "Nom de classe : Vehicule Diesel"<<endl;
    }
    VehiculeDiesel(VehiculeDiesel& V) : filtreAParticule(V.getFiltre()), Vehicule(V){
    }

    void affichage(){
        Vehicule::affichage();
        cout << "filtreAParticule : " << boolalpha <<filtreAParticule <<endl;
    }

};


#endif //TP8_C_VEHICULEDIESEL_H
