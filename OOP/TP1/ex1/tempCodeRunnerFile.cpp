#include "point.h"
#include <cstdio>
Point::Point(float x, float y)
{
    m_x=x;
    m_y=y;
}

Point::~Point()
{
}

void Point::deplace(float dx,float dy)
{
    m_x +=dx;
    m_y +=dy;
}
float Point::getX() const
{
    return 0.0f;
}
float Point::getY() const
{
    return 0.0f;
}
float Point::rho() const
{
    return 0.0f;
}
float Point::theta() const
{
    return 0.0f;
}
void Point::homothetie(float, float)
{
}
void Point::rotation(float)
{
}
void Point::affiche() const
{
    printf("%.2f, %.2f\n",m_x , m_y);
}
int main()
{
    Point P(2,5);
    P.affiche();

    P.deplace(-1,5);
    P.affiche();
    return 0;
}
