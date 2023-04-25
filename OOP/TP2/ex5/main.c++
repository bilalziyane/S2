#include <stdio.h>
#include "ex5.h"
Vecteur3d& Vecteur3d::operator + (const Vecteur3d &v )
{
    x=x+v.x;
    y=y+v.y;
    z=z+v.z;
    return (*this);
}
void Vecteured::affiche()const
{
    printf("%.2f, %.2f ,%.2f",mx,my,mz);
}
int main ()
{
    Vecteur3d a(1,2,3);
    Vecteur3d b(2);
    a+b;


}