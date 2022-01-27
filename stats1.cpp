#include <iostream>
using namespace std;

/*
 * A program where you take an input and give stats about it.   
 */

int

main()
{
	double value, total=0, sum, avg;
	
	while ( cin >> value ) {
		sum += value;
		total ++;
	}

	avg = sum / total;
	cout << total << "  items read" << endl;
	cout << "for a sum total of: " << sum << endl;
	cout << "and an avg. of: " << avg << endl;

	return 0;
} // main
