/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Point.cpp
But : Définir les méthodes de la classe Point
*********************************************/
#include <iostream>     // Inclusion de la bibliothèque standard pour l'entrée/sortie (cout)
#include "Point.h"      // Inclusion du fichier d'en-tête de la classe Point

using namespace std;    // Utilisation de l'espace de noms standard

// Constructeur par défaut qui initialise les coordonnées du point à (0, 0)
Point::Point()
{
    this->x = 0;  // Coordonnée X initialisée à 0
    this->y = 0;  // Coordonnée Y initialisée à 0
}

// Constructeur paramétré qui initialise les coordonnées avec les valeurs spécifiées
Point::Point(int _x, int _y)
{
    this->x = _x;  // Coordonnée X initialisée à _x
    this->y = _y;  // Coordonnée Y initialisée à _y
}

// Constructeur de copie qui initialise un nouvel objet Point avec les valeurs d'un autre objet Point
Point::Point(const Point& other):x(other.x), y(other.y)
{
}

// Méthode d'accès pour obtenir la coordonnée X
int Point::GetX() const
{
    return this->x;  // Retourne la coordonnée X du point
}

// Méthode d'accès pour obtenir la coordonnée Y
int Point::GetY() const
{
    return this->y;  // Retourne la coordonnée Y du point
}

// Méthode de modification pour la coordonnée X
void Point::SetX(int _x)
{
    this->x = _x;  // Modifie la coordonnée X du point
}

// Méthode de modification pour la coordonnée Y
void Point::SetY(int _y)
{
    this->y = _y;  // Modifie la coordonnée Y du point
}

// Méthode qui permet de translater le point de dx unités en X et dy unités en Y
void Point::translater(int dx, int dy)
{
    this->x += dx;  // Incrémente la coordonnée X de dx
    this->y += dy;  // Incrémente la coordonnée Y de dy
}

// Surcharge de la méthode translater pour utiliser un autre objet Point
void Point::translater(const Point& other)
{
    this->x += other.x;  // Incrémente la coordonnée X avec celle du point passé en paramètre
    this->y += other.y;  // Incrémente la coordonnée Y avec celle du point passé en paramètre
}

// Surcharge de l'opérateur += pour ajouter un autre point à ce point
void Point::operator+=(Point const& p1)
{
    this->translater(p1);  // Utilise la méthode translater pour ajouter les coordonnées du point p1
}

// Fonction qui affiche les coordonnées d'un point
void afficherPoint(Point &exp)
{
    cout << "Coordonnees du point" << endl;  // Affiche un titre
    cout << "X : " << exp.GetX() << endl;   // Affiche la coordonnée X
    cout << "Y : " << exp.GetY() << endl;   // Affiche la coordonnée Y
}

// Surcharge de l'opérateur << pour afficher un point de manière lisible dans un flux de sortie
ostream& operator<<(ostream& s, Point const& c)
{
    s << "(" << c.GetX() << "; " << c.GetY() << ")";  // Affiche les coordonnées sous forme de (X; Y)
    return s;  // Retourne le flux modifié
}

// Surcharge de l'opérateur + pour additionner les coordonnées de deux points et retourner un nouveau point
Point operator+(Point& p1, Point& p2)
{
    Point p3;  // Crée un nouveau point
    int x3 = p1.GetX() + p2.GetX();  // Additionne les coordonnées X des deux points
    int y3 = p1.GetY() + p2.GetY();  // Additionne les coordonnées Y des deux points
    p3.translater(x3, y3);  // Translater le point p3 avec les nouvelles coordonnées
    return p3;  // Retourne le nouveau point résultant
}
