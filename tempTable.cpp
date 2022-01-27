#include <iostream>
using namespace std;

/*
 * Learning to use arrays
 */

int
main ()
{
        double temp[744];
	int i=0;
	double avg, sum, dev, n, max;;

	while (cin >> n) {
		temp[i] = ((9.0/5) * n) + 32.0;
		sum += temp[i];
		i++;
	}//input elements of the array and find sum	
	
	max = 744.0;
	avg = sum / max;
	cout << "avg. is: " << avg << endl;
	cout << "temp	deviation" << endl;
	for (i = 0; i < 744; i++) {
		dev = temp[i] - avg;
		cout << temp[i] << "	" << dev << endl;
	}
	
} //main
