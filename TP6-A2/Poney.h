//
// Created by CHAUVEAU Maxime on 03/01/2023.
//

#ifndef TP6_CPP_PONEY_H
#define TP6_CPP_PONEY_H
#include "Point.h"
class Poney {
private:
    char* identifier;                                                   //Nom poney
    Point position;
public:

    Poney();
    Poney(int x, int y);
    Poney(Poney &poney1);
    Poney(char* name, Point point);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    char* getIdentifier();
    void setIdentifier(char* name);
    float moveTo(Point& p);
    float moveTo(Poney& p2);
    float moveTo(int x,int y);
    //void setPosition(int x, int y);
    //Point getPosition() const;
    void print();
    ~Poney();
};


#endif //TP6_CPP_PONEY_H
