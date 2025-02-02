/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Cercle.h
But : Définir la classe Cercle
*********************************************/
#include <iostream>     // Inclusion de la bibliothèque standard pour l'entrée/sortie (cout)
#include "Forme.h"      // Inclusion de l'en-tête de la classe Forme (Cercle hérite de Forme)
using namespace std;    // Utilisation de l'espace de noms standard

#ifndef cpp_cercle_h  // Définition d'une garde d'inclusion pour éviter l'inclusion multiple
#define cpp_cercle_h

// Déclaration de la classe Cercle, qui est une dérivée de la classe Forme
class Cercle : public Forme {
protected :
    int rayon;       // Rayon du cercle
    string type = "Cercle";  // Type de la forme, ici un cercle

public :
    // Constructeur par défaut qui initialise le rayon à 0
    Cercle();

    // Constructeur paramétré qui initialise le rayon avec une valeur donnée
    Cercle(int _rayon);

    // Constructeur paramétré qui initialise le centre du cercle et le rayon
    Cercle(Point &_centre, int _rayon);

    // Setter pour modifier le rayon du cercle
    void setRayon(int _rayon);

    // Getter pour obtenir le rayon du cercle
    int getRayon() const;

    // Getter pour obtenir le type de la forme ("Cercle")
    string getType() const;

    // Implémentation de la méthode virtuelle perimetre pour calculer le périmètre du cercle
    int perimetre() const;

    // Implémentation de la méthode virtuelle surface pour calculer la surface du cercle
    int surface() const;
    // Implémentation de la méthode virtuelle surface pour afficher
    void afficher()const;
};

// Déclaration de la surcharge de l'opérateur << pour afficher un cercle dans un flux de sortie
ostream& operator<<(ostream& s, Cercle const& c);

#endif  // Fin de la garde d'inclusion cpp_cercle_h
