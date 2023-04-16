#include <iostream>
#include "Point.h"
#include "tableauGenerique.h"
using namespace std;
//template<class T> void pointTest (T a, T b) {
//    Point<T> p1(a,b);
//    cout << "Point(T,T) : " << &p1 << endl;
//    cout << "(" << p1.getX() << ";" << p1.getY() << ")" << endl;
//    cout << "~Point(T,T) : " << &p1 << endl;
//}
int main() {
//    std::cout << "Hello, World!" << std::endl;
//    cout << "-----------------------------------------------------" << endl;
//    pointTest ("cheveux","blancs");
//    cout << "-----------------------------------------------------" << endl;
//    pointTest <float> (1.2,2.6);
    TableauGenerique<int> T1(5);
    cout << "size of generic array : " << T1.getSize() << endl;
    cout << "first value : " << T1.getFirst() << endl;
    cout << "last value : " << T1.getLast() << endl;
    T1.printArray();
    return 0;
}