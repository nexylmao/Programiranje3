#include "Niz.hpp"

Niz::Niz()
{
    count = 0;
    values = NULL;
}
Niz::Niz(const int arr[], int len)
{
    count = len;
    values = new int[len];
    for(int i = 0; i < count; i++)
    {
        values[i] = arr[i];
    }
}
Niz::Niz(const Niz& x)
{
    count = x.count;
    values = new int[count];
    for(int i = 0; i < count; i++)
    {
        values[i] = x.values[i];
    }
}
Niz::~Niz()
{
    delete[] values;
}
int Niz::length() const
{
    return count;
}
int& Niz::operator[](int x)
{
    return values[x];
}

int Niz::operator[](int x) const
{
    return values[x];
}

Niz& Niz::operator=(const Niz& x)
{
    values = x.values;
    count = x.count;
    return *this;
}

Niz& Niz::operator+=(const Niz& x)
{
    int* newarr = new int[count + x.count];
    int y = 0;
    for(int i = 0; i < count; i++)
    {
        newarr[y++] = values[i];
    }
    for(int i = 0; i < x.count; i++)
    {
        newarr[y++] = x.values[i];
    }
    values = newarr;
    count = count + x.count;
    return *this;
}

bool operator==(const Niz& x1, const Niz& x2)
{
    if(x1.count != x2.count)
    {
        return false;
    }
    else
    {
        bool ok = true;
        for(int i = 0; i < x1.count; i++)
        {
            if(x1.values[i] != x2.values[i])
            {
                ok = false;
            }
        }
        return ok;
    }
}

bool operator!=(const Niz& x1, const Niz& x2)
{
    return !(x1==x2);
}

Niz operator+(const Niz& x1, const Niz& x2)
{
    int newcount = x1.count + x2.count;
    int* newarr = new int[newcount];
    int x = 0;
    for(int i = 0; i < x1.count; i++)
    {
        newarr[x++] = x1[i];
    }
    for(int i = 0; i < x2.count; i++)
    {
        newarr[x++] = x2[i];
    }
    Niz novi(newarr, newcount);
    return novi;
}

ostream& operator<<(ostream& out, const Niz& x)
{
    out << " { ";
    for(int i = 0; i < x.count; i++){
        out << x[i];
        if(i + 1 < x.count)
        {
            out << " , ";
        }
    }
    out << " } " << endl;
}