#include "ListeFormes.h"
#include <algorithm>
#include <limits>

ListeFormes::ListeFormes() {}

ListeFormes::~ListeFormes() {
    for (Forme* forme : formes) {
        delete forme;
    }
}

void ListeFormes::ajouterForme(Forme* forme) {
    formes.push_back(forme);
}

double ListeFormes::surfaceTotale() const {
    double surface = 0.0;
    for (const Forme* forme : formes) {
        surface += forme->surface();
    }
    return surface;
}

Rectangle* ListeFormes::boiteEnglobante() const {
    if (formes.empty()) return nullptr;

    int minX = std::numeric_limits<int>::max();
    int minY = std::numeric_limits<int>::max();
    int maxX = std::numeric_limits<int>::min();
    int maxY = std::numeric_limits<int>::min();

    for (const Forme* forme : formes) {
        Point centre = forme->getCentre();
        int x = centre.GetX();
        int y = centre.GetY();
        
        // Met à jour les coordonnées de la boîte englobante
        minX = std::min(minX, x);
        minY = std::min(minY, y);
        maxX = std::max(maxX, x);
        maxY = std::max(maxY, y);
    }

    // Crée un rectangle qui représente la boîte englobante
    Point centre(minX + (maxX - minX) / 2, minY + (maxY - minY) / 2);
    Rectangle* boite = new Rectangle(centre, maxX - minX, maxY - minY);
    return boite;
}

size_t ListeFormes::taille() const {
    return formes.size();
}

Forme* ListeFormes::getForme(size_t index) const {
    if (index < formes.size()) {
        return formes[index];
    }
    return nullptr;  // Si l'index est invalide
}
