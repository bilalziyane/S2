#ifndef point_h
#define point_h
class point
{
    friend void affiche(point&);
    int x, y;
public :
point (int abs = 0, int ord = 0)
{
x = abs;
y = ord;
}
};
#endif