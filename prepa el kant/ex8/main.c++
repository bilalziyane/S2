#include <cstdio>
#include "ho.h"

vecteur3d1::vecteur3d1(float c1=0.0, float c2=0.0, float c3=0.0)
{ 
x = c1 ; y = c2 ; z = c3 ;
}
bool vecteur3d1::coincide(vecteur3d1 b){
    if(this->x==b.x && this->y==b.y && this->z== b.z)
        return true;
    return 0;
}
int main()
{
    printf("hello you !");
    vecteur3d1 one(1,2,3);
    vecteur3d1 two(1,2,3);
    if(one.coincide(two))
      printf("you're th goat ");
}