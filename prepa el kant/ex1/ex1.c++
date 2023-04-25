#include <cstdio>
#include "ex.h"
point1::point1(float d_x,float d_y)
{
    x=d_x;
    y=d_y;
}
 /*const void point1::affiche() const
{
    printf("\nsla valeur de x est :%.2f",x);
    printf("\nla valeur de y est :%.2f",y);
}*/
void point1::deplace(float p_x,float p_y)
{
    x+=p_x;
    y+=p_y;
}
float point1::absice() const{
    return x;
}
float point1::ordonne() const{
    return y;
}
int main ()
{
    point1 p(1,2);

    printf("\nla nouvelle valeur de x est:%.2f",p.absice());
    printf("\nla nouvelle valeur de y est:%.2f",p.ordonne());

    p.deplace(p.absice(),p.ordonne());

    printf("\nla nouvelle valeur de x est:%.2f",p.absice());
    printf("\nla nouvelle valeur de y est:%.2f",p.ordonne());
   

}