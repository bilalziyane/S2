#include <cstdio>

class Point {
private:
    float m_x;
    float m_y;
    static int point_cnt;

public:
    Point(float x, float y) {
        point_cnt++;
        m_x = x;
        m_y = y;
    }

    ~Point() {
        point_cnt--;
    }

    void deplace(float dx, float dy) {
        m_x += dx;
        m_y += dy;
    }

    float getX() const {
        return m_x;
    }

    float getY() const {
        return m_y;
    }

    void affiche() const {
        printf("%.2f, %.2f, Nombre de points : %d\n", m_x, m_y, point_cnt);
    }

    static int point_cout() {
        return point_cnt;
    }
};

int Point::point_cnt = 0;

int main() {
    printf("%d\n", Point::point_cout());
    Point P(2, 5);
    P.affiche();
    printf("%d\n", P.point_cout());

    P.deplace(-1, 5);
    P.affiche();

    {
        Point p2(3, 6);
        p2.affiche();
        printf("%d\n", p2.point_cout());
    }

    P.affiche();
    printf("%d\n", P.point_cout());

    return 0;
}
