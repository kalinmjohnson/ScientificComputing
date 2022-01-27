#include <iostream>
#include <cmath>
using namespace std;

/*
 * A tempurature function
 */

double
FtoC (int F) {
	double C = (5/9.0) * (F - 32.0);
	return C;
}//FtoC

double
CtoF (int C) {
	double F = ((9.0/5) * C) + 32.0;
	return F;
}//CtoF


int
main()
{
	double F, C, diffTemp, step, startTemp, endTemp;
	char scale;
	cout << "starting temperature? ";
	cin >> startTemp;
	cout << "ending temperature? ";
	cin >> endTemp;
	cout << "step value? ";
	cin >> step;
	cout << "input scale (C or F)? ";
	cin >> scale;
	
	step = abs(step);

	cout << "F	C" << endl;

	if (startTemp > endTemp) {
		for (startTemp, F, C; startTemp >= endTemp; startTemp -= step) {
			if (scale == 'C') {
				F = CtoF(startTemp);
				cout << F << "	" << startTemp << endl;
			} else if (scale == 'F') {
				C = FtoC(startTemp);
                                cout << startTemp << "	" << C << endl;
			} else {
				cout << "error" << endl;
			}
		}//end for
	} else if (startTemp <= endTemp) {
		for (startTemp, F, C; startTemp <= endTemp; startTemp += step) {
                        if (scale == 'C') {
                                F = CtoF(startTemp);
                                cout << F << "	" << startTemp << endl;
                        } else if (scale == 'F') {
                                C = FtoC(startTemp);
                                cout << startTemp << "	" << C << endl;
                        } else {
                                cout << "error" << endl;
                        }
                }//end for
	}
	return 0;
}	//main
