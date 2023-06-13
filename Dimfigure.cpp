#include <iostream>
#include "Dimfigure.h"

using namespace std;

double Rectangle :: getLong()const
{
    return this -> m_longueur;
}

void Rectangle :: setLong(double longueur)
{
    this -> m_longueur = longueur;
}

double Rectangle :: getlarge()const
{
    return this -> m_largeur;
}

void Rectangle :: setlarge(double largeur)
{
    this -> m_largeur = largeur;
}

Rectangle :: Rectangle(double longueur, double largeur): m_longueur(longueur), m_largeur(largeur){}

double Rectangle :: perimeter() const
{
    return (this -> m_longueur + this -> m_largeur) * 2;
}

double Rectangle :: area() const
{
    return (this -> m_longueur * this -> m_largeur);
}

void Rectangle :: print () const
{
    cout << "Rectangle : " << this -> m_longueur << "x " << this -> m_largeur << endl;
}

