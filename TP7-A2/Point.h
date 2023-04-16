//
// Created by CHAUVEAU Maxime on 03/01/2023.
//

using namespace std;

#ifndef TP6_CPP_POINT_H
#define TP6_CPP_POINT_H


template<class T> class Point {
private:
    T x;
    T y;
public:
    Point(T x, T y);
    //Point(T x, T y) : x(x), y(y){};
    Point( Point& point);
    T getX();
    T getY();
    void setX(T x);
    void setY(T y);
    //void print();
};

template<class T> T Point<T>::getX() {
    return x;
}

template<class T> T Point<T>::getY() {
    return y;
}

template<class T> void Point<T>::setX(T x) {
    this->x = x;
}

template<class T> void Point<T>::setY(T y) {
    this->y = y;
}

template<class T> Point<T>::Point(T x, T y) {
    setX(x);
    setY(y);
}

template<class T> Point<T>::Point( Point& point) {
    setX(point.getX());
    setY(point.getY());
}




#endif //TP6_CPP_POINT_H
