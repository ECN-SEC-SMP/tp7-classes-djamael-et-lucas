/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Forme.h
But : Définir la classe Forme
*********************************************/
#include <iostream>
#include "Point.h"
using namespace std;

class Forme{
private :
    Point centre;
public :
    Forme(Point c);
    Point getCentre()const;
    void operator+=(Point const&p);
    virtual int perimetre()const=0 ;
    virtual int surface()const=0;
};