#ifndef NIZ_HPP_INCLUDED
#define NIZ_HPP_INCLUDED

#include <iostream>
using namespace std;

class Niz
{
    private:
        int count;
        int *values;
    public:
        Niz();
        Niz(const int[], int);
        Niz(const Niz&);
        ~Niz();
        int length() const;
        int& operator[](int);
        int operator[](int) const;
        Niz& operator=(const Niz&);
        Niz& operator+=(const Niz&);
        friend bool operator==(const Niz&, const Niz&);
        friend bool operator!=(const Niz&, const Niz&);
        friend Niz operator+(const Niz&, const Niz&);
        friend ostream& operator<<(ostream&, const Niz&);
};

#endif