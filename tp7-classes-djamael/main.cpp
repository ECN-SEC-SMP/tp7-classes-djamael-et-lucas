/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : main.cpp
But : Fichier principale permettant d'instancier et de tester nos classes
*********************************************/
#include <iostream>
#include "Point.h"
#include "Forme.h"

void afficherPoint(Point &exp)
{
    cout <<"Coordonnees du point"<<endl;
    cout << "X : "<< exp.GetX() <<endl;
    cout << "Y : "<< exp.GetY() <<endl;
}

ostream& operator<<(ostream&s,Point const&c)
{
    s << "("<< c.GetX() <<" ;" << c.GetY()<<")";
    return s;
}

ostream& operator<<(ostream&s,Forme const&f)
{
    s << "Centre :"<< f.getCentre();
    return s;
}

Point operator+(Point& p1, Point& p2)
{
    Point p3;
    int x3 = p1.GetX()+ p2.GetX();
    int y3 = p1.GetY()+ p2.GetY();
    p3.translater(x3,y3);
    return p3;
}

int main()
{
     //  ----------------[ Instanciations de la classe Point et tests des méthodes ]-------------------
    Point p1(10,14);
    Point p2(p1);
    Point p3;
    cout<<"P1 : ";
    afficherPoint(p1);
    cout<<"P2 : ";
    afficherPoint(p2);
    p1.translater(2,5);
    cout<<"P1 apres translation :";
    afficherPoint(p1);
    cout<<"P2 apres translation de P1:";
    afficherPoint(p2);
    p2.translater(p1);
    cout<<"P2 apres translation par rapport a P1:";
    afficherPoint(p2);
    cout<<"P3 apres translation par rapport a P2:";
    p3.translater(p1);
    afficherPoint(p3);
    //  ----------------[ Surcharge de l'opérateur << ]-------------------
    cout << "Coordonées du point P1: "<< p1<<endl;
    cout << "Coordonées du point P2: "<< p2<<endl;
    cout << "Coordonées du point P3: "<< p3<<endl;
     //  ----------------[ Surcharge de l'opérateur + ]-------------------
    p3 = p1 + p2;
    cout << "Coordonées du point P3 = P1 + P2: "<< p3<<endl;
     //  ----------------[ Surcharge de l'opérateur +=]-------------------
    p3 += p2;
    cout << "Coordonées du point P3 += P2: "<< p3<<endl;
}