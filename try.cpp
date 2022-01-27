#include <iostream>
using namespace std;
#include "Pllgrm.hpp"

int
main()
{
    Rect garden(3.5,4.2);
    Pllgrm patio(1.5,2.0);
    patio.setAngle(3.14159/3.0);

    cout << "Garden:" << endl;
    cout << "  Area is = " << garden.getArea() << endl;
    cout << "  Perimeter is = " << garden.getPerimeter() << endl;
    cout << endl;
    cout << "Patio:" << endl;
    cout << "  Area is = " << patio.getArea() << endl;
    cout << "  Perimeter is = " << patio.getPerimeter() << endl;

} // main
