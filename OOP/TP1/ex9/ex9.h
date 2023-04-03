#ifndef vecteur3d
#define vecteur3d
class Vecteur3d
{ 
    float x, y, z ;
public :
    Vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0);
    bool coincide(Vecteur3d v);
    bool coincide_ptr(Vecteur3d *v);
    bool coincide_ref(Vecteur3d &v);
};
#endif