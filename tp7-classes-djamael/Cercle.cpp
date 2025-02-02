/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Cercle.cpp
But : Définir les méthodes de la classe Cercle
*********************************************/
#include "Cercle.h"    // Inclusion du fichier d'en-tête de la classe Cercle
#include <cmath>       // Inclusion de la bibliothèque mathématique pour utiliser la fonction pow

// Constructeur par défaut de la classe Cercle, initialise le rayon à 1
Cercle::Cercle() : Forme()  // Appel au constructeur de la classe de base (Forme)
{
    this->rayon = 1;   // Le rayon est initialisé à 1 par défaut
}

// Constructeur paramétré qui initialise le rayon avec une valeur donnée
Cercle::Cercle(int _rayon) : Forme()  // Appel au constructeur de la classe de base (Forme)
{
    this->rayon = _rayon;  // Initialisation du rayon avec la valeur fournie
}

// Constructeur paramétré qui initialise le centre du cercle et le rayon
Cercle::Cercle(Point &_centre, int _rayon) : Forme(_centre)  // Appel au constructeur de la classe de base avec un Point
{
    this->rayon = _rayon;  // Initialisation du rayon avec la valeur fournie
}

// Getter pour obtenir le rayon du cercle
int Cercle::getRayon() const
{
    return this->rayon;  // Retourne la valeur du rayon
}

// Getter pour obtenir le type de la forme (toujours "Cercle")
string Cercle::getType() const
{
    return this->type;  // Retourne le type de la forme (ici "Cercle")
}

// Setter pour définir le rayon du cercle
void Cercle::setRayon(int _rayon)
{
    this->rayon = _rayon;  // Modifie la valeur du rayon
}

// Méthode pour calculer le périmètre du cercle (2 * pi * rayon)
int Cercle::perimetre() const
{
    return 2 * this->rayon * 3.14;  // Retourne le périmètre (utilisation de la constante approximative pi = 3.14)
}

// Méthode pour calculer la surface du cercle (pi * rayon^2)
int Cercle::surface() const
{
    return pow(this->rayon, 2) * 3.14;  // Retourne la surface (utilisation de la fonction pow pour rayon^2 et approximative pi = 3.14)
}

// Surcharge de l'opérateur << pour afficher un cercle
ostream& operator<<(ostream& s, Cercle const& c)
{
    // Affiche une description du cercle avec son type, son rayon et son centre
    s << "Il s'agit d'un " << c.getType() << " de rayon : " << c.getRayon()
      << " et de centre " << c.getCentre() << endl;  // Utilisation de la méthode getCentre() de la classe Forme
    return s;  // Retourne le flux de sortie pour permettre un chaînage d'opérations
}
void Cercle::afficher()const
{
    cout<<*this;
}