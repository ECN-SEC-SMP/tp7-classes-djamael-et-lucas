#ifndef CLASS_POINT_H
#define CLASS_POINT_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

class point{
private:
    int x;
    int y;

public:
    //methode qui translate avec un point
    void translater(const point &p);

    //methode qui translate avec une paire de reels
    void translater(int x_t, int y_t);

    //constructeur sans parametre
    point();
    
    //constructeur deux parametres
    point(int x, int y);

    //constructeur de recopie
    point(const point &p);
    
    //accesseurs
    int get_x() const; // const dire que les attributs ne sont pas modifies

    int get_y() const; // const dire que les attributs ne sont pas modifies
    
    //mutateurs
    void set_x(int x);

    void set_y(int y);

    //methode qui affiche les coordonnees du point
    void afficher();

    //surcharge de l'operateur +=
    void operator+=(point &p);
};






#endif