#ifndef main_H
#define main_H
class Vecteur3d
{
float x, y, z;
public :
Vecteur3d (float c1 = 0.0, float c2 = 0.0, float c3 = 0.0)
{
x = c1;
y = c2;
z = c3;
}
Vecteur3d& operator + (const Vecteur3d & );
};
#endif