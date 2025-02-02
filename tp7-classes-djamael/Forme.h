/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Forme.h
But : Définir la classe Forme
*********************************************/
#include <iostream>     // Inclusion de la bibliothèque standard pour l'entrée/sortie (cout)
#include "Point.h"      // Inclusion du fichier d'en-tête de la classe Point
#ifndef cpp_forme_h  // Définition d'une garde d'inclusion pour éviter l'inclusion multiple
#define cpp_forme_h

using namespace std;    // Utilisation de l'espace de noms standard

// Déclaration de la classe Forme, qui est une classe abstraite
class Forme{
protected :
    Point centre;  // Le centre de la forme (représenté par un objet Point)

public :
    // Constructeur par défaut qui initialise le centre de la forme à (0, 0)
    Forme();

    // Constructeur paramétré qui initialise le centre avec un point donné
    Forme(Point &c);

    // Méthode pour obtenir le centre de la forme
    Point getCentre() const;

    // Surcharge de l'opérateur += pour translater la forme en fonction d'un point
    void operator+=(Point const& p);

    // Méthode virtuelle pure pour calculer le périmètre de la forme
    // Cette méthode doit être implémentée dans les classes dérivées
    virtual int perimetre() const = 0;

    // Méthode virtuelle pure pour calculer la surface de la forme
    // Cette méthode doit être implémentée dans les classes dérivées
    virtual int surface() const = 0;

    virtual void afficher() const=0;
};

// Déclaration de la surcharge de l'opérateur << pour afficher une forme dans un flux de sortie
ostream& operator<<(ostream& s, Forme const& f);

#endif  // Fin de la garde d'inclusion cpp_forme_h
