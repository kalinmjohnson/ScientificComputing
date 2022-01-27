#include <iostream>
using namespace std;

int
main () 
{
	int temp[24];
	
	int i, max;
	for (i = 0; i < 24; i++) {
		cin >> temp [i];
	}

	max = temp[0];
	for (i = 1; i < 24; i++) {
		cout << temp[i] << endl;
		if (temp[i] > max) {
			max = temp[i];
		}
	}

	cout << "The max value is " << max << endl;
	return 0;
} // main
