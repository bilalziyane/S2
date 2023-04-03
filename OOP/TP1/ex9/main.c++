#include <cstdio>
#include "ex9.h"

    Vecteur3d::Vecteur3d(float c1=0.0, float c2=0.0, float c3=0.0)
    { 
        x = c1 ; y = c2 ; z = c3 ;
    }

    bool Vecteur3d::coincide(Vecteur3d v)
    {
        return (x == v.x && y == v.y && z == v.z);
    }

    bool Vecteur3d::coincide_ptr(Vecteur3d *v)
    {
        return (x == v->x && y == v->y && z == v->z);
    }

    bool Vecteur3d::coincide_ref(Vecteur3d &v)
    {
        return (x == v.x && y == v.y && z == v.z);
    }


int main()
{
    Vecteur3d v1(1.0, 2.0, 3.0);
    Vecteur3d v2(1.0, 2.0, 3.0);

    // Transmission par valeur
    if(v1.coincide(v2))
    {
        std::printf("Les vecteurs v1 et v2 ont les memes composantes (transmission par valeur)\n");
    }

    // Transmission par adresse
    if(v1.coincide_ptr(&v2))
    {
        std::printf("Les vecteurs v1 et v2 ont les memes composantes (transmission par adresse)\n");
    }

    // Transmission par reference
    if(v1.coincide_ref(v2))
    {
        std::printf("Les vecteurs v1 et v2 ont les memes composantes (transmission par reference)\n");
    }

    return 0;
}
