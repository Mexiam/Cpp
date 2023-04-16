//
// Created by CHAUVEAU Maxime on 14/12/2022.
//

#include "PPM.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;
//setnbImage(0);


//AJOUT DE 3 VALEURES PAR PIXEL AU LIEU  UNE


//------------------------------------------EXERCICE 1-------------------------------------------------------------//

//------------------------------------------setter-----------------------------------------------------------------//

void Image::setHauteur(int x) {
    if (x>0) {
        largeur = x;
    }
}

void Image::setLargeur(int x) {
    if(x>0) {
        hauteur = x;
    }
}

void Image::setValmax(int x) {
    if(x>0){
        valMax= x;
    }
}

void Image::setValmin(int x) {
    if(x>0){
        valMin= x;
    }
}

void Image::setData(int ***table) {
    data=table;
}

void Image::setnbImage(int x) {
    nbImpagePGM=x;
}
//------------------------------------------getter-----------------------------------------------------------------//

int Image::getHauteur() {
    return hauteur;
}

int Image::getLargeur() {
    return largeur;
}

int Image::getValmax() {
    return valMax;
}

int Image::getValmin() {
    return valMin;
}

int*** Image::getData() {
    return data;
}

int Image::getnbImagePGM() {
    return nbImpagePGM;
}
//------------------------------------------functions allocation---------------------------------------------------//

void Image::initImage() {
    data = new int**[getHauteur()];
    for (int y = 0; y < getHauteur(); y++) {
        data[y] = new int*[getLargeur()];
        for (int x = 0; x < getLargeur(); x++) {
            data[y][x] = new int[3];
        }
    }
    ***data = {0};
}

void Image::supprImage() {
    for(int i=0;i<getHauteur();i++){
        delete[] data[i];
    }
    delete[] data;
}

void Image::creeImage(int minpix, int maxpix) {
    srand (time(NULL));
    for (int i=0;i<getHauteur();i++){
        for(int j=0;j<getLargeur();j++) {
            data[i][j] = rand() % (maxpix - minpix) + minpix;
        }
    }
}

//------------------------------------------Contructeur/Destructeur------------------------------------------------//

Image::Image() {
    setLargeur(0);
    setHauteur(0);
    setValmax(0);
    setData(nullptr);
    nbImpagePGM++;
}

Image::Image(int largeur, int hauteur, int minpix=0, int maxpix=255){
    setHauteur(hauteur);
    setLargeur(largeur);
    setValmin(minpix);
    setValmax(maxpix);
    setData(nullptr);
    nbImpagePGM++;
}

Image::~Image() {
    supprImage();
}

Image::Image(const Image &ppm) {
    largeur = ppm.largeur;
    hauteur = ppm.hauteur;
    valeurMin = ppm.valeurMin;
    valeurMax = ppm.valeurMax;
    data = new int**[getHauteur()];
    for (int y = 0; y < getHauteur(); y++) {
        data[y] = new int*[getLargeur()];
        for (int x = 0; x < getLargeur(); x++) {
            data[y][x] = new int[3];
            data[y][x][0] = ppm.data[y][x][0];
            data[y][x][1] = ppm.data[y][x][1];
            data[y][x][2] = ppm.data[y][x][2];
        }
    }
    nbImage++;
}

//------------------------------------------Affichage-----------------------------------------------------------------//

void Image::afficherImage() {
    cout << "P3" << endl;
    cout << getLargeur() << " " << getHauteur() << endl;
    cout << getValmax() << endl;

    for (int y = 0; y < getHauteur(); y++) {
        for (int i = 0; i < 3; i++) {
            for (int x = 0; x < getLargeur(); x++) {
                cout << data[y][x][i] << " ";
            }
            cout << endl;
        }
    }
}

void Image::ecrireFichier(char *nom_fichier) {
    ofstream fichier(nom_fichier, ios::out | ios::trunc);
    if (fichier) {
        fichier << "P3" << endl;
        fichier << getLargeur() << " " << getHauteur() << endl;
        fichier << getVal() << endl;

        for (int y = 0; y < getHauteur(); y++) {
            for (int x = 0; x < getLargeur(); x++) {
                fichier << data[y][x][0] << " " << data[y][x][1] << " " << data[y][x][2] << " ";
            }
            fichier << endl;
        }
        fichier.close();
    }
}

//------------------------------------------Dessin--------------------------------------------------------------------//

/*void Image::dessinRect(int x1, int y1, int x2, int y2, int val) {
    for(int y=y1; y<y2; y++){
        for(int x=x1; x<x2; x++){
            data[x][y]=val;
        }
    }
}

void Image::dessinLigne(int x1, int x2, int line, int val) {
    for(int x=x1; x<x2;x++){
        data[x][line-1]=val;
    }
}

void Image::dessinCroix(int x, int y, int val) {
    data[x][y] = val;
    data[x-1][y-1] = val;
    data[x+1][y-1] = val;
    data[x-1][y+1] = val;
    data[x+1][y+1] = val;
}*/

//------------------------------------------EXERCICE 2-------------------------------------------------------------//

/*void Image::lectureFichier(char *nom_fichier) {
    ifstream monfichier;
    string ligne;
    stringstream s;
    monfichier.open(nom_fichier);
    if (monfichier.is_open()){
        getline(monfichier,ligne);
        s << monfichier.rdbuf();
        s >> largeur >> hauteur;
        s >> valeurMax;
        initImage();
        for (int y = 0; y < getHauteur(); y++) {
            for (int x = 0; x < getLargeur(); x++) {
                s >> data[y][x][0] >> data[y][x][1] >> data[y][x][2];
            }
        }
    }
    monfichier.close();
}
*/

/*void Image::seuil(int seuil) {
    for (int y = 0; y < getLargeur(); y++) {
        for (int x = 0; x < getHauteur(); x++) {
            if (data[x][y] > seuil) {
                data[x][y]=255;
            } else {
                data[x][y]=0;
            }
        }
    }
}*/

/*void Image::floue(int size) {
    Image* newPgm = new Image(*this);

    int average;
    for (int y = 0; y < getHauteur(); y++) {
        for (int x = 0; x < getLargeur(); x++) {
            average = newPgm->getAverage(x, y, size, newPgm);
            data[x][y] = average;
        }
    }
}

int Image::getAverage(int centerX, int centerY, int size, Image* newPgm) {
    int nbMoyenne = 0;
    int pixelAverage = 0;
    for (int y=centerY-size; y < centerY+size; y++) {
        for (int x=centerX-size; x < centerX+size; x++) {
            if (x >= 0 && x < newPgm->getLargeur() && y >= 0 && y < newPgm->getHauteur()) {
                pixelAverage+=newPgm->data[x][y];
                nbMoyenne++;
            }
        }
    }
    if (nbMoyenne != 0) {
        return pixelAverage/nbMoyenne;
    }
    return pixelAverage;
}

void Image::filtrerImage(int k) {
    Image* newPgm = new Image(*this);

    int median;
    for (int y = 0; y < getHauteur(); y++) {
        for (int x = 0; x < getLargeur(); x++) {
            median = newPgm->getMedian(x, y, k);
            data[x][y] = median;
        }
    }
}

int Image::getMedian(int x0, int y0, int size) {
    int* array = new int[size*size];
    int i;
    for (int y = y0-((int) size/2); y < y0+((int) size/2); y++) {
        i = 0;
        for (int x = x0 - ((int) size/2); x < x0 + ((int) size/2); x++) {
            if (x >= 0 && x < getLargeur() && y >= 0 && y < getHauteur()) {
                array[i] = data[x][y];
                i++;
            }
        }
    }

    selectionSort(array, i);

    int nb = array[(int) ceil(i/2)];

    delete[] array;

    return nb;
}


void Image::selectionSort(int* array, int size) {
    int key, j;
    for (int i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}*/