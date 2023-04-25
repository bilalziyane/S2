
#include <iostream>
#include "Vect1.h"

Vecteur3d::Vecteur3d(double x,double y,double z)
{
    v[0]=x;
    v[1]=y;
    v[2]=z;
}

void Vecteur3d::affiche()const
{
    printf("(%.2f ,%.2f ,%.2f)\n",v[0],v[1],v[2]);
}

 void operator << (std::ostream &out,const Vecteur3d &u)
{
    out << "(" <<u.v[0] << ", " << u.v[1] << ", " <<u.v[2]<<")";
    
}
void operator >>(std::istream &in,Vecteur3d &n)
{
    in >> n.v[1];
}
double &Vecteur3d::operator[] (int i)
{
    return v[i];
}
double Vecteur3d::operator[] (int i) const
{
    return v[i];
}


   int main()
{
   const Vecteur3d u(2 ,5);
    std::cout <<u ;
    std::cout << '\n';
    std::cout <<u[1];
    std::cin >> u[1];
    std::cout <<u[1];
    return 0;
    
}
