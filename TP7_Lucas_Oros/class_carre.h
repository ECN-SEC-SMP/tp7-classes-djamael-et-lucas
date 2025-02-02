#ifndef CLASS_CARRE_H
#define CLASS_CARRE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>  
#include <map>
#include "class_point.h"
#include "class_forme.h"
#include "class_rectangle.h"

using namespace std;

class carre : public rectangle{ //heritage de la classe rectangle
private:
    //point centre; //pas besoin de redéclarer le centre car il est déjà déclaré dans la classe forme
    //int largeur;  //pas besoin de redéclarer la largeur car elle est déjà déclarée dans la classe rectangle
    //int hauteur;  //pas besoin de redéclarer la hauteur car elle est déjà déclarée dans la classe rectangle
    string type = "carre";

public:
    //constructeur sans parametre
    carre();
    // Constructeur avec paramètres 
    carre(point p, int c); // Constructeur avec paramètres point et cote

    //pas besoin fonction abstraite perimetre car elle est déjà déclarée dans la classe rectangle

    //pas beosin fonction abstraite surface car elle est déjà déclarée dans la classe rectangle

    friend ostream& operator<<(ostream &out, const carre &c); //surcharge de l'opérateur << pour afficher les attributs de la classe carre

};






#endif