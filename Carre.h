#ifndef CARRE_H
#define CARRE_H

#include "Dimfigure.h"

class Carre : public Rectangle
{

    public:

    Carre(double cote):Rectangle(cote, cote){}
    void printcarre() const;
    
    private:

};

#endif