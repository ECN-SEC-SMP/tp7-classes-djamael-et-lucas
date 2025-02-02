/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Carre.h
But : Définir la classe Carre
*********************************************/
#include <iostream>   // Inclusion de la bibliothèque d'entrée/sortie pour les opérations d'affichage
#include "Rectangle.h" // Inclusion de la classe Rectangle, car un carré est un type particulier de rectangle
using namespace std;  // Utilisation de l'espace de noms standard pour simplifier le code

#ifndef cpp_carre_h  // Protection contre les inclusions multiples du fichier d'en-tête
#define cpp_carre_h

// Définition de la classe Carre qui hérite de la classe Rectangle
class Carre : public Rectangle {
private:
    string type = "Carre";  // Initialisation de l'attribut type pour identifier la forme comme étant un Carré

public:
    // Constructeurs de la classe Carre
    Carre();  // Constructeur par défaut (initialise un carré avec un côté de taille 1)
    Carre(int _cote);  // Constructeur avec un paramètre pour définir la dimension du côté du carré
    Carre(Point &_centre, int _cote);  // Constructeur avec centre et dimension spécifiée

    // Getter pour récupérer la dimension du côté du carré
    int getCote() const;  // Retourne la longueur du côté du carré

    // Getter pour récupérer le type de la forme
    string getType() const;  // Retourne le type de la forme (ici "Carre")

    // Setter pour modifier la dimension du côté du carré
    void setCote(int _cote);  // Définit la longueur du côté du carré
    void afficher() const;
};

// Surcharge de l'opérateur << pour afficher un objet de type Carre dans un flux de sortie
ostream& operator<<(ostream& s, Carre const& c);  // Permet d'afficher les informations du carré (dimension et centre)

#endif  // Fin de la protection contre les inclusions multiples
