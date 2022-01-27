#include <iostream>
using namespace std;

/*
 *  *
 *   */

int

main ()
{
	int i=5,j;
	cout << "n	triangular number" << endl;

	for (i, j; i <=50; i += 5) {
		j=i * (i+1)/2;
		cout << i << "	  " << j << endl;
	} 	


	return 0;
} // main
