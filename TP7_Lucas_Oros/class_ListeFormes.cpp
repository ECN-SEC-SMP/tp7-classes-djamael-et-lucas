#include "class_point.h"
#include "class_forme.h"
#include "class_rectangle.h"
#include "class_carre.h"
#include <iostream>
#include "class_ListeFormes.h"

using namespace std;

// Constructeur par défaut
ListeFormes::ListeFormes() {}

//ajouter forme à la liste 
void ListeFormes::ajouter_forme(forme* l) {
    liste.push_back(l); //ajout de la forme à la liste (push_back permet de rajouter 1 élément à la fin du vecteur)
}

// Calcul de la surface totale de la liste
int ListeFormes::surface_totale() const {
    int surface = 0;
    for (int i = 0; i < liste.size(); i++) {
        surface += liste[i]->forme_surface(); //on ajoute la surface de chaque forme à la surface totale
    }
    return surface;
}

// Calcul de la boîte englobante (plus petit rectangle aligné sur les axes)
void ListeFormes::calcul_boite_englobante(int& x_min, int& x_max, int& y_min, int& y_max) const {

    if (liste.empty()) {
        return; // Si la liste est vide, on ne fait rien
    }

    //initialisation des valeurs min et max
    x_min = liste[0]->forme_get(1);  //on prend la coordonnée x du premier élément de la liste
    x_max = liste[0]->forme_get(1);  //on prend la coordonnée x du premier élément de la liste
    y_min = liste[0]->forme_get(0); //on prend la coordonnée y du premier élément de la liste
    y_max = liste[0]->forme_get(0); //on prend la coordonnée y du premier élément de la liste

    //parcours toutes les formes de la liste pour ajuster les limites de la boîte englobante
    for (int i = 1; i < liste.size(); i++) {
        if (liste[i]->forme_get(1) < x_min) { //si la coordonnée x est plus petite que x_min
            x_min = liste[i]->forme_get(1); //on met à jour x_min
        }
        if (liste[i]->forme_get(1) > x_max) { //si la coordonnée x est plus grande que x_max
            x_max = liste[i]->forme_get(1); //on met à jour x_max
        }
        if (liste[i]->forme_get(0) < y_min) { //si la coordonnée y est plus petite que y_min
            y_min = liste[i]->forme_get(0); //on met à jour y_min
        }
        if (liste[i]->forme_get(0) > y_max) { //si la coordonnée y est plus grande que y_max
            y_max = liste[i]->forme_get(0); //on met à jour y_max
        }
    }
}

// Affichage des formes de la liste
void ListeFormes::afficher_formes() const {
    for (int i = 0; i < liste.size(); i++) {
        cout << *liste[i] << endl; //on affiche chaque forme de la liste
    } // affichage de la forme "Centre : (x, y)" (affichage surchargé dans la classe forme) pour avoir le type de la forme 
      // il faudrait un getter dans la classe forme pour recuperer le type de la forme et des fonctions get type dans les classes cercle, rectangle et carre
      // on ne les a pas implementé ici
}






