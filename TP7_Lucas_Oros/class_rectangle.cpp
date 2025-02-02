#include "class_point.h"
#include "class_forme.h"
#include "class_rectangle.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
rectangle::rectangle() : forme(), largeur(0), hauteur(0) {}

// Constructeur
rectangle::rectangle(point p, int l, int h) : forme(p), largeur(l), hauteur(h) {}

//fonction perimetre
int rectangle::forme_perimetre() const {
    return 2*(this->largeur + this->hauteur);
}

//fonction surface
int rectangle::forme_surface() const{
    return this->largeur * this->hauteur;
}

//surcharge de l'opérateur << pour afficher les attributs de la classe cercle
// type -> centre -> rayon
ostream& operator<<(ostream &out, const rectangle &c) {
    out << "Type : " << c.type << " -> Centre : (" << c.forme_get(1) << ", " << c.forme_get(0) << "), Largeur : " 
        << c.largeur << ", Hauteur : " << c.hauteur;
    return out;
}



