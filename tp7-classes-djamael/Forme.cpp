/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Forme.cpp
But : Définir les méthodes de la classe Forme
*********************************************/
#include <iostream>
#include "Forme.h"

Forme::Forme(Point c)
{
    this->centre = c;
}

Point Forme::getCentre()const
{
    return this->centre;
}
void Forme::operator+=(Point const&p)
{
    this->centre.translater(p);
}