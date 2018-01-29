#include "Klase.hpp"

int main()
{
	// NENAD VULETIC | ALEKSANDAR KOVACEVIC | NIKOLA JOSIPOVIC
    string tenkic;
    int x,y;
    cout << "Upisite naziv objekta: " ;
    cin >> tenkic ;
    Tacka2D tacka;
    Objekat obj(tenkic,tacka);
    cout << obj << endl ;
    cout << "Unesite novu X lokaciju (negativnu za izlazak): " ;
    cin >> x;
    cout << "Unesite novu Y lokaciju (negativnu za izlazak): " ;
    cin >> y;
    obj.promeniLokaciju(x,y);
    cout << obj << endl ;
    cout << "Unesite novu X lokaciju (negativnu za izlazak): " ;
    cin >> x;
    cout << "Unesite novu Y lokaciju (negativnu za izlazak): " ;
    cin >> y;
    obj.promeniLokaciju(x,y);
    char c;
    do
    {
        cout << "> ";
        cin >> c;
        switch(c)
        {
            case 'w' : y++;
            break;
            case 's' : y--;
            break;
            case 'a' : x--;
            break;
            case 'd' : x++;
            break;
            case 'p' : cout << obj;
            break;
        }
        obj.promeniLokaciju(x,y);
    }
    while(c != 'x');
    return 0;
}
