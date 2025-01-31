/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : Point.h
But : Définir la classe Point
*********************************************/
#include <iostream>
using namespace std;

class Point{
private :
    int x, y;
public :
    Point();
    Point(int _x, int _y);
    Point(const Point& other);
    int GetX() const;
    int GetY() const;
    void SetX(int _x);
    void SetY(int _y);
    void translater(int dx, int dy);
};