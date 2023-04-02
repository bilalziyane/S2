#include "hey.h"
#include <cstdio>
int Point::point_cnt =0;//static global est =0 par defaut .
int Point::point_cout
{
    return point_cnt;
}
Point::Point(float x, float y)
{
    point_cnt ++;
    m_x=x;
    m_y=y;
}

Point::~Point()
{
    point_cnt --;
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
    printf("%d\n",Point::point_cout())
    Point P(2,5);
    P.affiche();
    printf("%d\n",p.point_cout())

    P.deplace(-1,5);
    P.affiche();
    {
        Point p2(3,6)
        p2.affiche();
        printf("%d\n",p2.point_cout())
    }
    p.affiche();
        printf("%d\n",p.point_cout())
    return 0;
}