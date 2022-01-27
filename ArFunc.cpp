#include <iostream>
using namespace std;

/*
 *  * Learning to use arrays
 *   */
void
nomod (int a[], int b)
{
	a[0] = 5;
	b = 7;
} // nomod


int
main ()
{	
	int num = 3;
	int anra[] = {8, 9, 10};
	cout << anra [0] << " " << anra [1] << " " << num << endl;
	nomod(anra, num);
	cout << anra [0] << " " << anra [1] << " " << num << endl;
} //main
