#ifndef CLASS_RECTANGLE_H
#define CLASS_RECTANGLE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>  
#include <map>
#include "class_point.h"
#include "class_forme.h"

using namespace std;

class rectangle : public forme{ //heritage de la classe forme
private:
    //point centre; //pas besoin de redéclarer le centre car il est déjà déclaré dans la classe forme
    int largeur;
    int hauteur;
    string type = "rectangle";

public:
    //constructeur sans parametre
    rectangle();
    // Constructeur avec paramètres 
    rectangle(point p, int l, int h);

    // Accesseurs pour largeur et hauteur
    int get_largeur() const;
    int get_hauteur() const;

    //fonction abstraite perimetre
    int forme_perimetre() const override; // const pour ne pas modifier les attributs de la classe - override pour redéfinir la fonction de la classe mère

    //fonction abstraite surface
    int forme_surface() const override; // const pour ne pas modifier les attributs de la classe - override pour redéfinir la fonction de la classe mère

    friend ostream& operator<<(ostream &out, const rectangle &c); //surcharge de l'opérateur << pour afficher les attributs de la classe rectangle

};






#endif