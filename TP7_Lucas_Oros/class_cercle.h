#ifndef CLASS_CERCLE_H
#define CLASS_CERCLE_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>  
#include <map>
#include "class_point.h"
#include "class_forme.h"

using namespace std;

class cercle : public forme{ //heritage de la classe forme
private:
    //point centre; //pas besoin de redéclarer le centre car il est déjà déclaré dans la classe forme
    int rayon;
    string type = "cercle";

public:
    //constructeur sans parametre
    cercle();
    // Constructeur avec paramètres 
    cercle(point p, int r);

    //fonction abstraite perimetre
    int forme_perimetre() const override; // const pour ne pas modifier les attributs de la classe - override pour redéfinir la fonction de la classe mère

    //fonction abstraite surface
    int forme_surface() const override; // const pour ne pas modifier les attributs de la classe - override pour redéfinir la fonction de la classe mère

    friend ostream& operator<<(ostream &out, const cercle &c); //surcharge de l'opérateur << pour afficher les attributs de la classe cercle

};






#endif