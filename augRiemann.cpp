#include <iostream>
using namespace std;

/*
 *  Integral Program, but changed :)
 */
int
main()
{
	double sum = 0.0, height, delta, x, min = 0.0, max = 10.0;
	int steps, j, i;		

	for (steps=10; steps<10001; steps*=10) {

		delta = (max - min) / steps;

		x = min;
		for (i=0; i < steps; i++) {
			// f(x) = (-1/200)*x*(x-3)(x-9)(x-10)+2
			height = (-1.0/200.0)*x*(x-3.0)*(x-9.0)*(x-10.0) + 2.0;
			sum += height * delta;
			x += delta;
		}		

		cout << "Area under the curve: " << sum  << endl;
		
		sum = 0.0;
	}

	return 0;
} //main
