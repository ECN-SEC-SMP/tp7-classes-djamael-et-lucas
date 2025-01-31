//Lucas Oros TP7 - SEC - 31/01/2025

//#include <stdio.h>
#include <iostream>
#include "test.h"
#include <math.h>  
#include <fstream> 
#include <map>
#include <sstream>
#include "class_point.h"
#include "class_forme.h"

using namespace std;


// Surcharge de l'opérateur pour cout (externe a la classe)
ostream& operator<<(ostream &out,point &p) {
    out << "(" << p.get_x() << ", " << p.get_y() << ")";
    return out;
}






void partie1(void) {
    point p1(1, 2);
    point p2(3, 4);
    point p3(p1);
    p1.set_x(p1.get_x() + 2);

    p1.afficher();
    p2.afficher();
    p3.afficher();

    p1.translater(p2);
    p3.translater(3, 6);

    p1.afficher();
    p2.afficher();
    p3.afficher();
}

void partie2(void){
    point p1(2, 3);
    point p2(5, 8);

    cout << "Point 1 : " << p1 << endl;
    cout << "Point 2 : " << p2 << endl;

    p1 += p2;
    cout << "Point 1 apres translation : " << p1 << endl;
};

void partie3(void){
    forme f1(point(1, 2));
    forme f2(point(3, 4));
    forme f3(f1);

    point p(5, 5);
    f2.forme_set(p); // remplace f2
    

    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;

    f1 += p;
    f3 += p;

    //cout
    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;

    

    //test get le centre de la forme f1
    //cout << "Centre de la forme f1 : " << f1.forme_get(f1, 1) << ", " << f1.forme_get(f1, 0) << endl;
};