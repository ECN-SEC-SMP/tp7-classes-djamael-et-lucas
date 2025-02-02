/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Point.h
But : Définir la classe Point
*********************************************/
#include <iostream>     // Inclusion de la bibliothèque standard pour l'entrée/sortie (cout)
using namespace std;    // Utilisation de l'espace de noms standard

#ifndef cpp_point_h  // Définition d'une garde d'inclusion pour éviter l'inclusion multiple
#define cpp_point_h

// Déclaration de la classe Point
class Point{
private :
    int x, y;  // Coordonnées du point (x, y)

public :
    // Constructeur par défaut, initialise les coordonnées à (0, 0)
    Point();

    // Constructeur paramétré qui initialise les coordonnées avec les valeurs fournies
    Point(int _x, int _y);

    // Constructeur de copie, crée un point avec les mêmes coordonnées qu'un autre point
    Point(const Point& other);

    // Méthode d'accès pour obtenir la coordonnée X
    int GetX() const;

    // Méthode d'accès pour obtenir la coordonnée Y
    int GetY() const;

    // Méthode pour définir la coordonnée X
    void SetX(int _x);

    // Méthode pour définir la coordonnée Y
    void SetY(int _y);

    // Méthode pour translater le point de dx unités en X et dy unités en Y
    void translater(int dx, int dy);

    // Méthode pour translater le point par rapport à un autre point
    void translater(const Point& other);

    // Surcharge de l'opérateur += pour ajouter un autre point au point actuel
    void operator+=(Point const& p1);
};

// Déclaration de la fonction qui affiche les coordonnées d'un point
void afficherPoint(Point &exp);

// Déclaration de la surcharge de l'opérateur << pour afficher un point dans un flux de sortie
ostream& operator<<(ostream& s, Point const& c);

// Déclaration de la surcharge de l'opérateur + pour additionner deux points et retourner un nouveau point
Point operator+(Point& p1, Point& p2);

#endif  // Fin de la garde d'inclusion cpp_point_h
