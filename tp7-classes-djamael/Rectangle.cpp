/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Rectangle.cpp
But : Définir les méthodes de la classe Rectangle
*********************************************/
#include "Rectangle.h"  // Inclusion du fichier d'en-tête de la classe Rectangle
#include <math.h>       // Inclusion de la bibliothèque mathématique pour utiliser la fonction pow (bien que non utilisée ici)

// Constructeur par défaut de la classe Rectangle, initialise les côtés à 1
Rectangle::Rectangle() : Forme()  // Appel au constructeur de la classe de base (Forme)
{
    this->cote_L = 1;   // La longueur est initialisé à 1
    this->cote_l = 1;   // La largeur est initialisé à 1
}

// Constructeur paramétré qui initialise les côtés avec des valeurs données
Rectangle::Rectangle(int _cote_l, int _cote_L) : Forme()  // Appel au constructeur de la classe de base (Forme)
{
    this->cote_L = _cote_L;  // Initialisation de la longueur avec la valeur fournie
    this->cote_l = _cote_l;  // Initialisation de la largeur avec la valeur fournie
}

// Constructeur paramétré qui initialise le centre du rectangle et les côtés
Rectangle::Rectangle(Point &_centre, int _cote_l, int _cote_L) : Forme(_centre)  // Appel au constructeur de la classe de base avec un Point
{
    this->cote_L = _cote_L;  // Initialisation de la longueur avec la valeur fournie
    this->cote_l = _cote_l;  // Initialisation de la largeur avec la valeur fournie
}

// Getter pour obtenir la longueur de la longueur
int Rectangle::getCote_L() const
{
    return this->cote_L;  // Retourne la longueur de la longueur
}

// Getter pour obtenir la longueur de la largeur
int Rectangle::getCote_l() const
{
    return this->cote_l;  // Retourne la longueur de la largeur
}

// Getter pour obtenir le type de la forme (ici "Rectangle")
string Rectangle::getType() const
{
    return this->type;  // Retourne le type de la forme (ici "Rectangle")
}

// Setter pour définir la longueur de la largeur
void Rectangle::setCote_l(int _cote_l)
{
    this->cote_l = _cote_l;  // Modifie la valeur de la largeur
}

// Setter pour définir la longueur de la longueur
void Rectangle::setCote_L(int _cote_L)
{
    this->cote_L = _cote_L;  // Modifie la valeur de la longueur
}

// Méthode pour calculer le périmètre du rectangle (2 * (cote_L + cote_l))
int Rectangle::perimetre() const
{
    return (this->cote_L + this->cote_l) * 2;  // Retourne le périmètre du rectangle
}

// Méthode pour calculer la surface du rectangle (cote_L * cote_l)
int Rectangle::surface() const
{
    return this->cote_L * this->cote_l;  // Retourne la surface du rectangle
}

// Surcharge de l'opérateur << pour afficher un rectangle
ostream& operator<<(ostream& s, Rectangle const& r)
{
    // Affiche une description du rectangle avec son type, ses dimensions et son centre
    s << "Il s'agit d'un " << r.getType() << " de largeur : " << r.getCote_l() 
      << ", de longueur : " << r.getCote_L() << " et de centre " << r.getCentre() << endl;
    return s;  // Retourne le flux de sortie pour permettre un chaînage d'opérations
}

void Rectangle::afficher()const
{
    cout<<*this;
}