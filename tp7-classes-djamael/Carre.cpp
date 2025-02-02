/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Carre.cpp
But : Définir les méthodes de la classe Carre
*********************************************/
#include "Carre.h"  // Inclusion de l'en-tête Carre.h pour lier les déclarations aux définitions

// Constructeur par défaut : Initialisation d'un carré avec un côté de taille 1
Carre::Carre() : Rectangle()  // Appel au constructeur par défaut de la classe de base Rectangle
{
    this->cote_L = 1;  // Définition du côté supérieur à 1
    this->cote_l = this->cote_L;  // Le côté inférieur est égal au côté supérieur pour un carré
}

// Constructeur avec côté : Initialisation d'un carré avec la dimension spécifiée pour le côté
Carre::Carre(int _cote) : Rectangle(_cote, _cote)  // Appel au constructeur de Rectangle avec des côtés égaux
{  
    // Aucune initialisation nécessaire ici car elle est effectuée par le constructeur de Rectangle
}

// Constructeur avec centre et côté : Initialisation d'un carré avec un centre et la dimension du côté spécifiée
Carre::Carre(Point &_centre, int _cote) : Rectangle(_centre, _cote, _cote)  // Appel au constructeur de Rectangle avec un centre et des côtés égaux
{
    // Aucune initialisation nécessaire ici car elle est effectuée par le constructeur de Rectangle
}

// Getter pour obtenir la dimension du côté du carré
int Carre::getCote() const
{
    return this->cote_L;  // Le côté supérieur (cote_L) est la dimension du carré
}

// Getter pour obtenir le type de la forme (ici "Carre")
string Carre::getType() const
{
    return this->type;  // Retourne "Carre" pour identifier la forme
}

// Setter pour définir la dimension du côté du carré
void Carre::setCote(int _cote)
{
    this->cote_L = _cote;  // Définit le côté supérieur du carré
    this->cote_l = this->cote_L;  // Le côté inférieur est mis à jour pour rester égal au côté supérieur
}

// Surcharge de l'opérateur << pour afficher un objet de type Carre dans un flux de sortie
ostream& operator<<(ostream& s, Carre const& c)
{
    // Affiche le type du carré, sa dimension et son centre
    s << "Il s'agit d'un " << c.getType() << " de cote: " << c.getCote() << " et de centre " << c.getCentre() << endl;
    return s;  // Retourne le flux pour permettre une chaîne d'opérations d'affichage
}

void Carre::afficher()const
{
    cout<<*this;
}