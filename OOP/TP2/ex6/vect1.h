#if !defined VECTEUR3D_H
#define VECTEUR3D_H

#include <ostream>
class Vecteur3d
{
friend void operator >>(std::istream &,Vecteur3d &);
friend void operator << (std::ostream &out,const Vecteur3d &);
private:
    double v[3];
public:
    Vecteur3d(double =0,double =0, double =0);
    void affiche()const;
    double &operator [] (int i);
    double operator [](int i) const;
};
#endif // VECTEUR3D_H


