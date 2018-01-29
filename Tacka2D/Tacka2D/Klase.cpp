#include "Klase.hpp"

Tacka2D::Tacka2D()
{
    x = 0;
    y = 0;
}

Tacka2D::Tacka2D(int x, int y)
{
    (*this).x = x;
    (*this).y = y;
}

Tacka2D::Tacka2D(const Tacka2D& z)
{
    x = z.x;
    y = z.y;
}

void Tacka2D::setTacka(int x, int y)
{
    (*this).x = x;
    (*this).y = y;
}

ostream& operator<<(ostream& out, const Tacka2D& x)
{
    out << "(" << x.x << "," << x.y << ")";
    return out;
}

Objekat::Objekat(const string& x, const Tacka2D& y)
{
    ime=x;
    lokacija=y;
}

void Objekat::promeniLokaciju(int x, int y)
{
    lokacija.setTacka(x,y);
}

ostream& operator<<(ostream& out, const Objekat& outo)
{
    out << outo.ime << " se nalazi na " << outo.lokacija;
    return out;
}
