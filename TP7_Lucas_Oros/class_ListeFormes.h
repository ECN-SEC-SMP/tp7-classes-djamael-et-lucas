#ifndef CLASS_LISTEFORMES_H
#define CLASS_LISTEFORMES_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>  
#include <map>
#include "class_point.h"
#include "class_forme.h"
#include "class_rectangle.h"
#include <vector>


using namespace std;

class ListeFormes{ 
private:
    vector<forme*> liste; //liste de formes

public:
    //constructeur sans parametre
    ListeFormes();

    //ajout d'une forme à la liste
    void ajouter_forme(forme* l);

    // Calcul de la surface totale de la liste
    int surface_totale() const;

    // Calcul de la boîte englobante (plus petit rectangle aligné sur les axes)
    void calcul_boite_englobante(int& x_min, int& x_max, int& y_min, int& y_max) const;

    // Affichage des formes de la liste
    void afficher_formes() const;
};






#endif