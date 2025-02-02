#include "class_point.h"
#include "class_forme.h"
#include "class_rectangle.h"
#include "class_carre.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
carre::carre() : rectangle() {}

// Constructeur
carre::carre(point p, int c) : rectangle(p, c, c) {} // rectangle avec largeur = hauteur

//pas de fonction perimetre

//pas de fonction surface

//surcharge de l'opérateur << pour afficher les attributs de la classe cercle
// type -> centre -> rayon
ostream& operator<<(ostream &out, const carre &c) {
    out << "Type : " << c.type << " -> Centre : (" << c.forme_get(1) << ", " << c.forme_get(0) << "), cote : " << c.get_largeur();
    return out;
}



