#include "class_forme.h"
#include "class_point.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
forme::forme() : centre(0, 0) {}

// Constructeur avec paramètres
forme::forme(point p) : centre(p) {}

// Getters forme_get qui retourne les coordonnées du point
int forme::forme_get(bool x) const {
    if (x) {
        return this->centre.get_x();
    } else {
        return this->centre.get_y();
    }
}

// Setters forme_set qui met les coordonnées du centre point
void forme::forme_set(point p) {
    centre = p;
}

// Affichage des coordonnées avec get_forme
void forme::afficher() {
    cout << "Centre : (" << forme_get(1) << ", " << forme_get(0) << ")" << endl;
}


// Surcharge de l'opérateur pour operation += pour simplifier l’écriture de la translation d’un point (interne a la classe)
void forme::operator+=(point &p) {
    centre.translater(p);
}

//Surcharger l’opérateur « de façon à permettre l’utilisation de cout avec des Formes
ostream& operator<<(ostream &out, forme &f) {
    out << "Centre : (" << f.forme_get(1) << ", " << f.forme_get(0) << ")";
    return out;
}


