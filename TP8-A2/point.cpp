//
// Created by CHAUVEAU Maxime on 03/01/2023.
//

#include "Point.h"
#include <cmath>

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}

void Point::setX(int x) {
    this->x = x;
}

void Point::setY(int y) {
    this->y = y;
}

Point::Point(int x, int y) {
    setX(x);
    setY(y);
}

Point::Point( Point const &point) {
    this->x=point.x;
    this->y=point.y;
}
double Point::distance(Point P) {
    double a=0;
    double b=0;
    double distance=0;
    if(P.x>x){
        a=P.x-x;
    }else{
        a=x-P.x;
    }
    if(P.y>y){
        b=P.y-y;
    }else{
        b=y-P.y;
    }
    distance=sqrt(a*a+b*b);
    return distance;
}