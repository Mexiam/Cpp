//
// Created by CHAUVEAU Maxime on 14/12/2022.
//

#ifndef TP4_CPP_EXERCICE1_H
#define TP4_CPP_EXERCICE1_H
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iostream>
#include <fstream>
#include <cmath>

class Image {
private:
    int largeur;
    int hauteur;
    int valMax;
    int valMin;
    int **data;
    int nbImpagePGM;

public:
    Image();                                                                                                            //constr default
    Image(int hauteur, int largeur, int minpix, int maxpix);                                                            //constr setup
    ~Image();                                                                                                           //destr
    Image(Image &image);


    void setLargeur(int x);                                                                                             //setters
    void setHauteur(int x);
    void setValmax(int x);
    void setValmin(int x);
    void setData(int **table);
    void setnbImage(int x);

    int getLargeur();                                                                                                   //getters
    int getHauteur();
    int getValmax();
    int getValmin();
    int** getData();
    int getnbImagePGM();

    void initImage();                                                                                                   //memory
    void supprImage();
    void creeImage(int minpix, int maxpix);

    void afficherImage();                                                                                               //affichage
    void ecrireFichier(char* nom_fichier);

    void dessinRect(int x1, int y1, int x2, int y2, int val);                                                           //dessin
    void dessinLigne(int x1, int x2, int line, int val);
    void dessinCroix(int x, int y, int val);

    void lectureFichier(char* nom_fichier);
    void seuil(int seuil);
    void floue(int x);
    void filtrerImage(int k);

    int getAverage(int centerX, int centerY, int size, Image* newPgm);
    void selectionSort(int* array, int size);
    int getMedian(int x0, int y0, int size);
    };


#endif //TP4_CPP_EXERCICE1_H
