#include <cstdio>
#include "point.h"


int main()
{
    Point P(2,5);
    P.affiche();

    P.deplace(-1,5);
    P.affiche();
    return 0;
}
