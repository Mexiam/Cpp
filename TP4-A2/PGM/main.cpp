#include <iostream>
#include <fstream>
#include "PGM.h"

using namespace std;

int main() {
    //Image test(7,24,0,255);
    //Image test2;
    //Image test3(test);

    /*test.initImage();
    test.creeImage(0,255);
    test.afficherImage();
    char image[10] = "img1.pgm";
    test.ecrireFichier(image);
    //cout << "nombre d'images: " << test.getnbImagePGM() << endl;*/

    /*Image rect(25,25,0,255);
    rect.initImage();
    rect.dessinRect(0,0,25,25,150);
    rect.afficherImage();
    char image[10] = "img2.pgm";
    rect.ecrireFichier(image);
    */

    /*Image ligme(25,25,0,255);
    ligme.initImage();
    ligme.dessinLigne(0,25,7,255);
    ligme.dessinLigne(0,25,9,255);
    ligme.dessinCroix(10,10,200);
    ligme.dessinCroix(17,15,100);
    ligme.afficherImage();
    char image[10] = "img3.pgm";
    ligme.ecrireFichier(image);*/

    Image lena;
    char fichier[50]="lena.pgm";
    char fichierImage[50]="lena_floue.pgm";
    lena.lectureFichier(fichier);
    //lena.dessinLigne(0,512,100,0);
    //lena.dessinCroix(250,250,0);
    lena.floue(5);
    lena.afficherImage();
    lena.ecrireFichier(fichierImage);
    return 0;
}
