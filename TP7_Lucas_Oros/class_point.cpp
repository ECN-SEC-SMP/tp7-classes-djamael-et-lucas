#include "class_point.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
point::point(){
    this->x = 0;
    this->y = 0;
}

// Constructeur avec paramètres
point::point(int x, int y) : x(x), y(y) {}

// Constructeur de recopie
point::point(const point &p) : x(p.x), y(p.y) {}

// Getters
int point::get_x() const{
    return this->x;
}

int point::get_y() const {
    return this->y;
}

// Setters
void point::set_x(int x) {
    this->x = x;
}

void point::set_y(int y) {
    this->y = y;
}

// Translation avec deux réels
void point::translater(int x_t, int y_t) {
    this->x = x_t + x;
    this->y = y_t + y;
}

// Translation avec un autre point
void point::translater(const point &p) {
    x += p.x;
    y += p.y;
}

// Affichage des coordonnées avvec get_x et get_y
void point::afficher() {
    cout << "x = " << get_x() << " y = " << get_y() << endl;
}

// Surcharge de l'opérateur pour operation += pour simplifier l’écriture de la translation d’un point (interne a la classe)
void point::operator+=(point &p) {
    this->translater(p);
}

