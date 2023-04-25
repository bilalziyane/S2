#include <iostream>
#include <cstdio>


class vect3d
{
    friend std::ostream& operator<<(std::ostream&, const vect3d&);
    friend std::istream& operator>>(std::istream&, vect3d&);

private:
    float mx, my, mz;

public:
    vect3d(float x=0, float y=0, float z=0);
    void affiche() const;
    bool operator==(const vect3d&) const;
    vect3d& operator=(const vect3d&);
};

std::ostream& operator<<(std::ostream& out, const vect3d& v)
{
    out << "(" << v.mx << "," << v.my << "," << v.mz << ")";
    return out;
}

std::istream& operator>>(std::istream& in, vect3d& v)
{
    in >> v.mx >> v.my >> v.mz;
    return in;
}

vect3d::vect3d(float x, float y, float z)
{
    mx = x;
    my = y;
    mz = z;
}

void vect3d::affiche() const
{
    printf("%.2f, %.2f, %.2f", mx, my, mz);
}

bool vect3d::operator==(const vect3d& v) const
{
    return (mx == v.mx) && (my == v.my) && (mz == v.mz);
}

vect3d& vect3d::operator=(const vect3d& v)
{
    mx = v.mx;
    my = v.my;
    mz = v.mz;
    return (*this);
}

int main()
{
    vect3d v1, v2, v3;
    std::cout << "Enter x, y, and z for v1: ";
    std::cin >> v1;
    std::cout << "Enter x, y, and z for v2: ";
    std::cin >> v2;

    if (v1 == v2)
        std::cout << "v1 coincides with v2\n";
    else
        std::cout << "v1 does not coincide with v2\n";

    v3 = v1 = v2;
    std::cout << "v3: " << v3 << std::endl;
    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;

    return 0;
}

