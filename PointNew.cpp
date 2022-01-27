#include <iostream>
using namespace std;

/*
 *  First Pointers Program
 */
int
main()
{
	cout << "This is the first example from class." << endl;

	double dd;
	double *daddr;
	
	dd = 1.732;
	daddr = &dd;

	cout << dd << endl;
	cout << daddr << endl;
	cout << *daddr << endl;

	cout << " " << endl;
	cout << "This is the second example from class." << endl;

	double *ptr = 0;
        char *atr = 0;
        int *btr = 0;

	cout << ptr << " " << (void *)atr << " " << btr << endl;

	ptr++;
        atr++;
        btr++;

	cout << ptr << " " << (void *)atr << " " << btr << endl;

	return 0;
} //main
