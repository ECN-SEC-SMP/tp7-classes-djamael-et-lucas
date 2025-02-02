/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Forme.cpp
But : Définir les méthodes de la classe abstraite Forme
*********************************************/
#include <iostream>     // Inclusion de la bibliothèque standard pour l'entrée/sortie (cout)
#include "Forme.h"      // Inclusion du fichier d'en-tête de la classe Forme

// Constructeur par défaut de la classe Forme
Forme::Forme()
{
    // Initialise le centre de la forme à (0, 0)
    this->centre.SetX(0);  // Coordonnée X du centre à 0
    this->centre.SetY(0);  // Coordonnée Y du centre à 0
}

// Constructeur paramétré de la classe Forme, initialise le centre avec un point donné
Forme::Forme(Point &c)
{
    this->centre = c;  // Le centre de la forme prend les coordonnées du point c
}

// Méthode pour obtenir le centre de la forme
Point Forme::getCentre() const
{
    return this->centre;  // Retourne l'objet Point représentant le centre de la forme
}

// Surcharge de l'opérateur += pour translater la forme de la quantité spécifiée par le point p
void Forme::operator+=(Point const& p)
{
    this->centre.translater(p);  // Applique la translation au centre de la forme
}
ostream& operator<<(ostream& s, Forme const& f)
{
    s << "Forme de centre " << f.getCentre();
    return s;
}