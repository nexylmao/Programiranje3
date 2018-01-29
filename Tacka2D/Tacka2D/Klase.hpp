#ifndef KLASE_HPP_INCLUDED
#define KLASE_HPP_INCLUDED

#include <iostream>
using namespace std;

class Tacka2D
{
private:
    int x,y;
public:
    Tacka2D();
    Tacka2D(int, int);
    Tacka2D(const Tacka2D&);
    void setTacka(int, int);
    friend ostream& operator<<(ostream&, const Tacka2D&);
};

class Objekat
{
private:
    string ime;
    Tacka2D lokacija;
public:
    Objekat(const string&, const Tacka2D&);
    void promeniLokaciju(int, int);
    friend ostream& operator<<(ostream&, const Objekat&);
};

#endif // KLASE_HPP_INCLUDED
