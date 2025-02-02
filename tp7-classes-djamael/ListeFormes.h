#ifndef CPP_LISTEFORMES_H
#define CPP_LISTEFORMES_H

#include <vector>
#include "Forme.h"
#include "Rectangle.h"
class ListeFormes {
private:
    std::vector<Forme*> formes;  // Contient des pointeurs vers des objets Forme (ou ses dérivés)
public:
    ListeFormes();
    ~ListeFormes();

    void ajouterForme(Forme* forme);
    double surfaceTotale() const;
    Rectangle* boiteEnglobante() const;
    
    // Méthodes d'accès
    size_t taille() const;
    Forme* getForme(size_t index) const;
};

#endif
