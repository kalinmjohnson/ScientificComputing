#include <iostream>
using namespace std;

/*
 *  Integral Program
 */
int
main()
{
	double sum = 0.0, height, delta, x, min = 0.0, max = 2.5;
	int steps, i;		

	cout << "How many steps? ";
	cin >> steps;

	delta = (max - min) / steps;

	//cout << "With " << steps << " steps, each step is " << delta << endl;

	x = min;
	for (i=0; i < steps; i++) {
		// f(x) = 3x^2+5x+2
		height = (3*x*x) + (5*x) + 2;
		sum += height * delta;

		x += delta;
	}	

	cout << "Area under the curve: " << sum  << endl;

	return 0;
} //main
