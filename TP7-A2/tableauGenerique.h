//
// Created by CHAUVEAU Maxime on 25/01/2023.
//

#ifndef TP7_CPP_TABLEAUGENERIQUE_H
#define TP7_CPP_TABLEAUGENERIQUE_H
#include <iostream>
using namespace std;
template<class T> class TableauGenerique {
private:
    T* generic;
    int size;
    T* end;
public:
    int getSize();
    const T* getLast();
    const T* getFirst();
    void setSize(int size);
    TableauGenerique(int size);
    TableauGenerique(TableauGenerique& T1);
    ~TableauGenerique();
    void printArray();
};

template<class T> class iterator {
private:

};

template<class T> int TableauGenerique<T>::getSize() {
    return size;
}

template<class T> void TableauGenerique<T>::setSize(int size) {
    this->size = size;
}

template<class T> TableauGenerique<T>::TableauGenerique(int size) {
    this->generic = new T[size];
    for(int i=0; i<=size; i++){
        generic[i]=i;
    }
    setSize(size);
    this->end = this->generic;
}

template<class T> TableauGenerique<T>::TableauGenerique(TableauGenerique<T> &T1) {
    this->generic = new T[T1.getSize()];
    for(int i=0; i<=size;i++){
        this->generic[i] = T1.generic[i];
    }
    setSize(T1.getSize());
    this->end = generic[getSize()];
}
template<class T>TableauGenerique<T>::~TableauGenerique() {
    delete[] generic;
}

template<class T> const T* TableauGenerique<T>::getFirst() {
    return generic;
}

template<class T> const T* TableauGenerique<T>::getLast() {
    return end;
}

template<class T> void TableauGenerique<T>::printArray() {
    std::cout << "tableau : [";
    for(int i=0; i<=getSize(); i++){
        std::cout << generic[i];
        if(i != getSize()){
            std::cout << ";";
        }

    }
    std::cout << "]" << endl;

}

#endif //TP7_CPP_TABLEAUGENERIQUE_H
