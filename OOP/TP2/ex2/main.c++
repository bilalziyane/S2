#include <iostream>
#include <cstdio>
#include "ex2.h"
void operator << (std::ostream &out,const vect3d &v){
    out <<"("<< v.mx <<"," << v.my << "," << v.mz << ")";
}
vect3d::vect3d(float x,float y,float z)
{
    mx=x;
    my=y;
    mz=z;
}
void vect3d::affiche()const
{
    printf("%.2f, %.2f ,%.2f",mx,my,mz);
}
bool vect3d::operator == (const vect3d &v)const
{
    return (mx==v.mx)&&(my==v.my)&&(mz==v.mz);
}
bool operator != (const vect3d &a , const vect3d &h)
{
    return (a.mx!=h.mx)  || ( a.my !=h.my) || ( a.mz !=h.mz);
}
vect3d&  vect3d::operator= (const vect3d &v)
{
   mx=v.mx;
   my=v.my;
   mz=v.mz;
   return (*this);//on a pu retourner laddresse car les parametre de la fct font partie du code client . il existe toujour 
}
//constructeur de copy et destructeur et operateur d'affectation -> on les ecrit pas dons le cas de ne pas avoir pointeur.
//lorsqu'on retourne un & ou * on doit make sure that the addresse still exixsts after the end of the function .
//this est un pointeur sur l'objet couarnt .
//identifiant d'un objet est son addresse.
//dans la surcharge des fonction le parametre de gauche doit appartenir a la classe dans laquelle on a declarer la methode
int main()
{
   vect3d v1 ,v2(3),v3(v1);
   if (v1==v3)
      printf("v1 coincide v3\n");
   if (v3 != v2)
      printf("v3 ne coincide pas avec v2\n");
    v2.affiche();
    v1=v2=v3;
    printf("\n");
    v2.affiche();
    printf("\n");
    std::cout << v2;
    return 0;
}
//fct amie lorsque element de gauche ne fait pas partie de la classse 