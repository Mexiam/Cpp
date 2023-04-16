//
// Created by CHAUVEAU Maxime on 03/01/2023.
//

#ifndef TP6_CPP_POINT_H
#define TP6_CPP_POINT_H


class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y);
    Point( Point& point);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};


#endif //TP6_CPP_POINT_H
