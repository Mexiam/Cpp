#include <iostream>
#include "Vehicule.h"
#include "VehiculeDiesel.h"
#include "VehiculeGaz.h"
#include <vector>


void octaneRatingConsumptionTestsWithUpcast();
void octaneRatingConsumptionTestsWithUpcast(){
    VehiculeGaz gasVehicle95(Point(0,0), "XY-358-PQ", 30, 5, 95);
    VehiculeGaz gasVehicle98(Point(0,0), "HD-888-ZY", 30, 5, 98);
    vector<Vehicule*> vehicles = { &gasVehicle95, &gasVehicle98 };

}
int main() {
//    std::cout << "Hello, World!" << std::endl;
//    Vehicule vehicle(Point(5,6), "CC-987-JU", 50, 5.3);
//    vehicle.affichage();
//
//    VehiculeGaz gasVehicle(Point(25,3), "XY-358-PQ", 60, 6.8, 95);
//    gasVehicle.affichage();
//
//    VehiculeDiesel dieselVehicle(Point(2,10), "HD-888-ZY", 40, 5.5, true);
//    dieselVehicle.affichage();
//    VehiculeDiesel dieselVehicle(Point(2,10), "XY-358-PQ", 8, 5, false);
//    cout << "*******" << endl;
//    float traveletDist1 = dieselVehicle.mooveTo(0, 100);
//    std::cout << "Traveled distance: " << traveletDist1 << std::endl;
//    dieselVehicle.affichage();
//    cout << "*******" << endl;
//    float traveletDist2 = dieselVehicle.mooveTo(0, 200);
//    std::cout << "Traveled distance : " << traveletDist2 << std::endl;
//    dieselVehicle.affichage();

//    Vehicule V1(Point(5,6), "La voiture de oui-oui", 50, 53);
//    Vehicule V2(V1);
//    V2.affichage();
//    VehiculeGaz V3(Point(5,3),"voiture stylé", 50, 23, 5);
//    VehiculeGaz V4(V3);
//    VehiculeDiesel V5(Point(4,4), "cettte voiture est au diesel", 23,2, true);
//    VehiculeDiesel V6(V5);
//    V4.affichage();
//    V5.affichage();
//    VehiculeDiesel* dieselVehicle = new VehiculeDiesel(Point(2, 10), "HD-888-ZY",
//                                                     40, 5.5, true);
//    Vehicule* vehicle = dieselVehicle; // upcast
//    delete vehicle;
//    VehiculeGaz gasVehicle95(Point(0,0), "XY-358-PQ", 30, 5, 95);
//    cout << "Traveled distance : " << gasVehicle95.mooveTo(0, 100) << endl;
//    gasVehicle95.affichage();
//    VehiculeGaz gasVehicle98(Point(0,0), "HD-888-ZY", 30, 5, 98);
//    cout << "Traveled distance : " << gasVehicle98.mooveTo(0, 100) << endl;
//    gasVehicle98.affichage()



    return 0;
}
