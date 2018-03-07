#include <iostream>
#include "dinstring.hpp"
#include "klase.hpp"

using namespace std;

int main()
{
    Computer c1, c2(120, 2, "HD4500/GT420", "Win Vista"), c3(c2);
    cout << c1 << c2 << c3;
    Application a1, a2("C# master race", 1337), a3(a2);
    cout << a1 << a2 << a3;
    AndroidApp aa1, aa2(4.2, 5.0, 130), aa3(aa2);
    cout << aa1 << aa2 << aa3;
    DesktopApp da1, da2(c2,c2, "C#", 150), da3(da2);
    cout << da1 << da2 << da3;
    return 0;
}
