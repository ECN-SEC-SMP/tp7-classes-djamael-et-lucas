/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Rectangle.h
But : Définir la classe Rectangle
*********************************************/
#include <iostream>
#include "Forme.h"
using namespace std;
#ifndef cpp_rectangle_h
#define cpp_rectangle_h

// V1

class Rectangle : public Forme {
protected:
    int cote_l, cote_L;
    string type="Rectangle";
public :
    Rectangle();
    Rectangle(int _cote_l, int _cote_L);
    Rectangle(Point &_centre, int _cote_l, int _cote_L);
    int getCote_L() const;
    int getCote_l() const;
    string getType() const;

    void setCote_l(int _cote_l);
    void setCote_L(int _cote_L);
    
    int perimetre()const;
    int surface()const;
    void afficher()const;
    
};
ostream& operator<<(ostream&s,Rectangle const&r);
#endif