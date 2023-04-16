#include <iostream>
#include "Poney.h"
using namespace std;
void PoneyIdTest() {
    Point position(0,10);
    char identifier[] = "Fluttershy la poneyte";
    Poney poney(identifier, position);
    poney.print(); // affichage 1
    char * retrieveId = poney.getIdentifier();
    retrieveId[0] = 'B';
    poney.print(); // affichage 2
}
int main() {
//    std::cout << "Hello, World!" << std::endl;
//    Poney poney1(1,2);
//    Poney pooooney(2,2);
//    Point p(2,2);
//    //std::cout << "Hello, World!" << std::endl;
//    //Point p1 = poney1.getPosition();
//    poney1.setIdentifier("Epona");
//    cout << poney1.getIdentifier()<< endl;
//    //cout << poney1.moveTo(p) << endl;
//    cout << poney1.moveTo(2594,576) << endl;
//    poney1.print();
    PoneyIdTest();
    return 0;
}
