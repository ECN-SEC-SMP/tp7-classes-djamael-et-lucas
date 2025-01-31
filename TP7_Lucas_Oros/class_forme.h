#ifndef CLASS_FORME_H
#define CLASS_FORME_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include "class_point.h"

using namespace std;

class forme{
private:
    point centre;

public:
    //constructeur sans parametre
    forme();
    
    //constructeur a partir d'un point
    forme(point p);
    
    //accesseurs
    int forme_get(forme f, bool x); //const dire que les attributs ne sont pas modifies
    
    //mutateurs
    void forme_set(point p);

    //methode qui affiche les coordonnees du point
    void afficher();

    //surcharge de l'operateur +=
    void operator+=(point &p);

    //surcharge de l'operateur <<
    friend ostream& operator<<(ostream &out, forme &f);

    //fonction abstraite perimetre
    virtual int forme_perimetre(); //const = 0;

    //fonction abstraite surface
    virtual int forme_surface(); //const = 0;

};






#endif