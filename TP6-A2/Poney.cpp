//
// Created by CHAUVEAU Maxime on 03/01/2023.
//

#include "Poney.h"
#include <cstring>
#include <cmath>
#include <iostream>
Poney::Poney(): position(0,0){
    identifier = new char[10];
    strcpy(identifier,"name");
}

Poney::Poney(int x, int y) : position(x,y){
    identifier = new char[10];
    strcpy(identifier,"name");
}

int Poney::getX() {
    return position.getX();
}

int Poney::getY() {
    return position.getY();
}

void Poney::setX(int x) {
    position.setX(x);
}
void Poney::setY(int y){
    position.setY(y);
}

void Poney::setIdentifier(char *name) {
    delete[] identifier;
    identifier = new char[strlen(identifier)+1];
    strcpy(identifier,name);
}

/*Point Poney::getPosition() const {
    return position;
}*/

Poney::~Poney() {
    delete[] this->identifier;
}

Poney::Poney(Poney &poney1) : position(poney1.getX(),poney1.getY()), identifier(poney1.identifier) {
}

char *Poney::getIdentifier() {
    return identifier;
}

float Poney::moveTo(Point& p) {
    int a = getX()-p.getX();
    int b = getY()-p.getY();
    float dist = sqrt(pow(a,2)+pow(b,2));
    setX(p.getX());
    setY(p.getY());
    return dist;

//    float distance = sqrt(pow(p.getX()-getX(), 2) + pow(p.getY()-getY(), 2));
//    setX(p.getX());
//    setY(p.getY());
//    return distance;

}

float Poney::moveTo(Poney& p2) {
    int a = getX()-p2.getX();
    int b = getY()-p2.getY();
    float dist = sqrt(pow(a,2)+pow(b,2));
    setX(p2.getX());
    setY(p2.getY());
    return dist;
}

float Poney::moveTo(int x, int y) {
    int a = getX()-x;
    int b = getY()-y;
    float dist = sqrt(pow(a,2)+pow(b,2));
    setX(x);
    setY(y);
    return dist;
}

void Poney::print() {
    std::cout << "[" << getIdentifier() << "]" << " (" << getX() << "," << getY() << ")" << std::endl;
}

Poney::Poney(char *name, Point point) : position(point) {
    identifier = new char[strlen(name)+1];
    strcpy(identifier,name);
}