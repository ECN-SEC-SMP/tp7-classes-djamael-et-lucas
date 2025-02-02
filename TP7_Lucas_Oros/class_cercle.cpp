#include "class_point.h"
#include "class_forme.h"
#include "class_cercle.h"
#include <iostream>

using namespace std;

// Constructeur par défaut
cercle::cercle() : forme(), rayon(0) {}

// Constructeur
cercle::cercle(point p, int r) : forme(p), rayon(r) {}

//fonction perimetre
int cercle::forme_perimetre() const {
    return 2*this->rayon*3.1415;
}

//fonction surface
int cercle::forme_surface() const{
    return 3.1415*this->rayon*this->rayon;
}



