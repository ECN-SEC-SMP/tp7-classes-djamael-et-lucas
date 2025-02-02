//Lucas Oros TP7 - SEC - 31/01/2025

//#include <stdio.h>
#include <iostream>
#include "test.h"
#include <math.h>  
#include <fstream> 
#include <map>
#include <sstream>
#include "class_point.h"
#include "class_forme.h"
#include "class_cercle.h"
#include "class_rectangle.h"
#include "class_carre.h"
#include "class_ListeFormes.h"

using namespace std;



// Surcharge de l'opérateur pour cout (externe a la classe)
ostream& operator<<(ostream &out,point &p) {
    out << "(" << p.get_x() << ", " << p.get_y() << ")";
    return out;
}






void partie1(void) {
    point p1(1, 2);
    point p2(3, 4);
    point p3(p1);
    p1.set_x(p1.get_x() + 2);

    p1.afficher();
    p2.afficher();
    p3.afficher();

    p1.translater(p2);
    p3.translater(3, 6);

    p1.afficher();
    p2.afficher();
    p3.afficher();
}

void partie2(void){
    point p1(2, 3);
    point p2(5, 8);

    cout << "Point 1 : " << p1 << endl;
    cout << "Point 2 : " << p2 << endl;

    p1 += p2;
    cout << "Point 1 apres translation : " << p1 << endl;
};

void partie3(void){
    //pas de test car classe abstraite
};

void partie4_cercle(void){
    //création 2 cercles
    cercle c1(point(1, 2), 3); //centre (1, 2) et rayon 3
    cercle c2(point(3, 4), 5); //centre (3, 4) et rayon 5
    point p(3, 6);

    //translater le cercle c2 avec le point p(3, 6)
    c2 += p; // donc le centre de c2 devient (6, 10)

    cout << "Cercle 1 : " << c1 << endl;
    cout << "Cercle 2 : " << c2 << endl;

    
    //calculer le perimetre et la surface du cercle
    cout << "Perimetre du cercle 1 : " << c1.forme_perimetre() << endl;
    cout << "Surface du cercle 1 : " << c1.forme_surface() << endl;
}

void partie4_rectangle(void){
    //création 2 rectangles
    rectangle r1(point(1, 2), 3, 4); //centre (1, 2) et largeur 3 et hauteur 4
    rectangle r2(point(3, 4), 5, 6); //centre (3, 4) et largeur 5 et hauteur 6
    point p(3, 6);

    //translater le rectangle r2 avec le point p(3, 6)
    r2 += p; // donc le centre de r2 devient (6, 10)

    cout << "Rectangle 1 : " << r1 << endl;
    cout << "Rectangle 2 : " << r2 << endl;

    //calculer le perimetre et la surface du rectangle
    cout << "Perimetre du rectangle 1 : " << r1.forme_perimetre() << endl;
    cout << "Surface du rectangle 1 : " << r1.forme_surface() << endl;
}

void partie4_carre(void){
    //création 2 carrés
    carre c1(point(5, 6), 10); //centre (5, 6) et cote 10
    carre c2(point(3, 4), 7); //centre (3, 4) et cote 7
    point p(3, 6);

    //translater le carré c2 avec le point p(3, 6)
    c2 += p; // donc le centre de c2 devient (6, 10)

    cout << "Carre 1 : " << c1 << endl;
    cout << "Carre 2 : " << c2 << endl;

    //calculer le perimetre et la surface du carré
    cout << "Perimetre du carre 1 : " << c1.forme_perimetre() << endl;
    cout << "Surface du carre 1 : " << c1.forme_surface() << endl;
}

void partie5(void){
    ListeFormes liste;

    //création de 3 formes
    point p1(1, 0);
    cercle* c1 = new cercle(p1, 5); // Cercle avec rayon 5

    point p2(3, 3);
    rectangle* r1 = new rectangle(p2, 6, 4); // Rectangle avec largeur 6 et hauteur 4

    point p3(7, 1);
    carre* ca1 = new carre(p3, 3); // Carré avec côté 3

    // Ajout des formes dans la liste
    liste.ajouter_forme(c1);
    liste.ajouter_forme(r1);
    liste.ajouter_forme(ca1);

    // Affichage des formes
    cout << "Formes dans la liste:" << endl;
    liste.afficher_formes();

    // Calcul de la surface totale
    cout << "Surface totale : " << liste.surface_totale() << endl;
    //resultat attendu : 5*5*3.1415 + 6*4 + 3*3 = 78.53975 + 24 + 9 = 111.53975 (resultat obtenu ok)

    // Calcul de la boîte englobante
    int x_min, x_max, y_min, y_max;
    liste.calcul_boite_englobante(x_min, x_max, y_min, y_max);
    cout << "Boite englobante : (" << x_min << ", " << x_max << ", " << y_min << ", " << y_max << ")" << endl;
    //resultat attendu : (1, 7, 0, 3) (resultat obtenu ok)
}

