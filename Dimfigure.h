#ifndef DIMFIGURE_H
#define DIMFIGURE_H

class Rectangle
{

    public :

    double getLong() const;
    double getlarge() const;

    void setLong(double longueur);
    void setlarge(double largeur);

    Rectangle(double longueur, double larguer);

    double perimeter() const;
    double area() const;
    void print() const;

    private : 

    double m_longueur;
    double m_largeur;

};

#endif