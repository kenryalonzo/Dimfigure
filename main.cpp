#include <iostream>
#include "Dimfigure.h"
#include "Carre.h"

using namespace std;

int main()
{
    Rectangle *k, *p;
    Carre *c;

    p = new Rectangle (5, 3.2);
    c = new Carre(4);

    cout << p->perimeter();
    cout << c->perimeter();

    delete p;
    delete c;
    
    return 0;
}