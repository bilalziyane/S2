#include <iostream>
#include <ostream>
#include <iostream>
#include <windows.h>

class Vecteur3d {
friend void operator>>(std::istream&, Vecteur3d&);
friend void operator<<(std::ostream&, const Vecteur3d&);

private:
    double v[3];

public:
    Vecteur3d(double x = 0, double y = 0, double z = 0);
    void affiche() const;
    double& operator[](int i);
    double operator[](int i) const;
};

Vecteur3d::Vecteur3d(double x, double y, double z) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

void Vecteur3d::affiche() const {
    std::cout << "(" << v[0] << ", " << v[1] << ", " << v[2] << ")" << std::endl;
}

void operator<<(std::ostream& out, const Vecteur3d& u) {
    out << "(" << u.v[0] << ", " << u.v[1] << ", " << u.v[2] << ")";
}

void operator>>(std::istream& in, Vecteur3d& n) {
    in >> n.v[0] >> n.v[1] >> n.v[2];
}

double& Vecteur3d::operator[](int i) {
    return v[i];
}

double Vecteur3d::operator[](int i) const {
    return v[i];
}

int main() {
    const Vecteur3d u(2, 5, 0);
    std::cout << u;
    std::cout << '\n';
    std::cout << u[1] << std::endl;
    std::cin >> u;
    std::cout << u[1] << std::endl;
    return 0;
}
