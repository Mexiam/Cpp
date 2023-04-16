//
// Created by CHAUVEAU Maxime on 06/12/2022.
//

#ifndef TP2_CPP_EXERCICE1_H
#define TP2_CPP_EXERCICE1_H
#include <iostream>
#include <cmath>
#include <cstring>

class Arme{
private:
    char* name;
    int damages;
public:
    Arme();
    Arme(int n);
    ~Arme();
    char* getName();
    int getDamages();
    void setName(char* n);
    void returnAttributes();
    Arme(const Arme& weapon);
    Arme(Arme const& newarme);
};


class Personnage {
private:
    char* name;
    int PV;
    int positionX;
    int positionY;
    Arme arme;


public:
    Personnage();
    Personnage(char* n);
    Personnage(int PV);
    Personnage(int x, int y);
    Personnage(const Arme& weapon);
    Personnage(const Personnage& newPerson);
    ~Personnage();
    char* getName();
    int getPV();
    int getPosX();
    int getPosY();
    void setPosX(int n);
    void setPosY(int n);
    void setPV(int n);
    void returnAttributes();
    void attack(Personnage* target);
    void moove(int x, int y);
    static void compteur();
    static int count;
    bool live=true;
    static int getCount();
};



#endif //TP2_CPP_EXERCICE1_H
