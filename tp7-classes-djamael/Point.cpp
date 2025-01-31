/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Point.cpp
But : Définir les méthodes de la classe Point
*********************************************/
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(int _x, int _y)
{
    this->x = _x;
    this->y = _y;
}
Point::Point(const Point& other):x(other.x),y(other.x)
{
}
int Point::GetX() const
{
    return this->x;
}

int Point::GetY() const
{
    return this->x;
}

void Point::SetX(int _x)
{
    this->x = _x;
}
void Point::SetY(int _y)
{
    this->y = _y;
}

void Point::translater(int dx, int dy)
{
    this->x+=dx;
    this->y+=dx;
}