#include <iostream>
#include "ex1.h"
void affiche(point &pt)
{
    printf("l'abscice du point est :%d et l'ordonnne est: %d", pt.x,pt.y);
}
int main()
{
    point a(2,3);
    affiche(a);
}