//
// Created by CHAUVEAU Maxime on 03/01/2023.
//

#include "Point.h"

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

Point::Point( Point& point) {
    setX(point.getX());
    setY(point.getY());
}