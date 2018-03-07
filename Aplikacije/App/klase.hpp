#ifndef KLASE_HPP_INCLUDED
#define KLASE_HPP_INCLUDED

#define COMPANY_NAME "galina mrzi #define d.o.o"

#include <iostream>
#include "dinstring.hpp"
using namespace std;

class Computer
{
private:
    double hddGB, ramGB;
    DinString gCard, os;
public:
    Computer();
    Computer(double, double, char*, char*);
    Computer(const Computer&);
    friend ostream& operator<<(ostream&, const Computer&);
};

class Application
{
protected:
    DinString language, author;
    double sizeMB;
public:
    Application();
    Application(char*, double);
    Application(const Application&);
    friend ostream& operator<<(ostream&, const Application&);
};

class AndroidApp : public Application
{
private:
    double minVersion, targetVersion;
public:
    AndroidApp();
    AndroidApp(double, double, double);
    AndroidApp(const AndroidApp&);
    friend ostream& operator<<(ostream&, const AndroidApp&);
};

class DesktopApp : public Application
{
private:
    Computer minSysReq, optimumSysReq;
public:
    DesktopApp();
    DesktopApp(const Computer&, const Computer&, char*, double);
    DesktopApp(const DesktopApp&);
    friend ostream& operator<<(ostream&, const DesktopApp&);
};

#endif // KLASE_HPP_INCLUDED
