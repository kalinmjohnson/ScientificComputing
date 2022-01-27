#include <iostream>
using namespace std;

/*
 * A C++ program using a class
 * to demonstrate the constructor
 * and the destructor methods
 */

class Bop {
    private:
        int x_coord;
	int y_coord;
    public:
	int z_coord;
	Bop();
        Bop(int a, int b);
	~Bop();
	// void setX(int x);
	// void setY(int y);
	void showMe();
};

Bop::Bop() {
    x_coord = y_coord = z_coord = 0;
    cout << "hi, during 1st constructor" << endl;
}

Bop::Bop(int a, int b) {
    x_coord = a;
    y_coord = b;
    z_coord = 0;
    cout << "hi, during 2nd constructor " << a << " "  << b << endl;   
} // Bop constructor

Bop::~Bop() {
    cout << "Tilda one, get rid of it" << endl;
}

void Bop::showMe() {

    cout << "[" << x_coord << ", " << y_coord << ", " << z_coord << "]";
    cout << endl;
}

int
main()
{
    // Bop bopper(3,5);
    Bop bopper = Bop(3,5);
    Bop bee2;

    bopper.showMe();

    

    return 0;
} // main
