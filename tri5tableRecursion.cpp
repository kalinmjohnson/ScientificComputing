#include <iostream>
using namespace std;

/*
 * Tri table but modified (Recursion Redo)  *
 *   */

int
triNum (int i) {
	double j;
	if (i == 1) {return 1;}
	j = i+triNum(i-1);
	return j;
} // triNum end


int

main ()
{
	int i=5,j;
	cout << "n	triangular number" << endl;
	
	for (i=5; i<=50; i+=5) {
 		cout << i << "	  " << triNum(i) << endl;
	}	

	return 0;
} // main
