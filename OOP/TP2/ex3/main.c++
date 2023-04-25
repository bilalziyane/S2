#include "vect.h"
#include "mat.h"
#include <iostream>

vect::vect(t3 t) //vect::vect(double t[3])
{
    for (int i=0;i<3;i++)
   mv[i]=t[i];
}
vect::vect(double x,double y,double z)
{
    mv[0]=x;
    mv[1]=y;
    mv[2]=z;
}

std::ostream &operator <<(std::ostream &out/*hada hwa menbre gauche dont on parlait*/ , const vect&v)
{
    for (int i=0;i<3;i++)
        out << v.mv[i] << "\t";
    out <<"\n";
    return out ; //on doit toujour  retoune un objet appartenent a la classe ostream car lor du chainage par exemple (cout <<x<<y ) on applique la regle de gauche a droite dout (cout <<x) doit retourner un ostream 
}
Mat :: Mat(double t[3][3]){
    int i,j;
    for (int i=0; i<3;i++){
        for(int j=0;j<3;j++)
           m[i][j]=t[i][j];
    }
}
const vect prod(const Mat &A,const vect &v)
{
    vect res(0,0,0);
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
           res.mv[i]+=A.m[i][j]*v.mv[j];
    
    return res;
}
int main()
{
   double t[3]={1,2,3};
   double x[3][3] = {{1,0,3},{5,-1,2},{4,0,3}};
   vect v(t);
   //vect u(5,6,7);
   //std::cout << v << u;
   Mat m(x);
   std::cout << prod( m, v);
   return 0;

}
