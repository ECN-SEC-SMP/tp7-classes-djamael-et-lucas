/*********************************************
Auteurs :	Djamaël LAHAMION
Date : 31 janvier 2025
Fichier : main.cpp
But : Fichier principale permettant d'instancier et de tester nos classes
*********************************************/
#include <iostream>
#include "Forme.h"
#include "Point.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Carre.h"
#include "ListeFormes.h"

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
    cout<<"P3 : ";
    afficherPoint(p3);
    p1.translater(2,5);
    cout<<"P1 apres translation :";
    afficherPoint(p1);
    cout<<"P2 apres translation de P1:";
    afficherPoint(p2);
    p2.translater(p1);
    cout<<"P2 apres translation par rapport a P1:";
    afficherPoint(p2);
    cout<<"P3 apres translation par rapport a P2:";
    p3.translater(p2);
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


     //  ----------------[ Classe Formes geometriques ]-------------------
    Rectangle rectangle(2,3);
    Carre carre(2);
    Cercle cercle(5);

    cout<<carre<<endl;
    cout<<cercle<<endl;
    cout<<rectangle<<endl;
    cout<<"Perimetre du carre: "<< carre.perimetre()<<"; Surface du carre: "<<carre.surface()<<endl;
    cout<<"Perimetre du cercle: "<< cercle.perimetre()<<"; Surface du cercle: "<<cercle.surface()<<endl;
    cout<<"Perimetre du rectangle: "<< rectangle.perimetre()<<"; Surface du rectangle: "<<rectangle.surface()<<endl;

    //  ----------------[ Classe Liste Formes ]-------------------
    ListeFormes liste;

    Rectangle* r1 = new Rectangle(p1, 3, 4);
    liste.ajouterForme(r1);
    Cercle* c1 = new Cercle(p2, 2);
    liste.ajouterForme(c1);
    Carre* k1 = new Carre(p2, 2);
    liste.ajouterForme(k1);

    cout << "Liste des formes :" << endl;
    for (size_t i = 0; i < liste.taille(); i++)
    {
        liste.getForme(i)->afficher();
    }
    cout << "Surface totale : " << liste.surfaceTotale() << endl;

    Rectangle* boite = liste.boiteEnglobante();
    cout << "Boîte englobante : " << *boite << endl;

    // N'oublie pas de nettoyer la mémoire
    delete boite;

}