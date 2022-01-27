#include <iostream>
using namespace std;

/*
 *  * A C++ program about finding the number of coins in an amount of cents
 */

int

main ()
{
	int cents, ocents, quarters, dimes, nickels, pennies, total;
	cout << "Enter the total number in cents: ";
	cin >> cents;
	ocents = cents;
	quarters = cents / 25;
	cents = cents % 25;
	dimes = cents / 10;
	cents = cents % 10;
	nickels = cents / 5;
	cents = cents % 5;
	pennies = cents;
	total = quarters + dimes + nickels + pennies;
	cout << ocents << " cents can be made using ";
	if (quarters > 0) {
		if (quarters == 1) {
			cout <<  quarters << " quarter, ";
		} else {
			cout <<  quarters << " quarters, ";
		}
	}
	
	if (dimes > 0) {
		if (dimes == 1) {
                        cout << dimes << " dime, ";
                } else {
                        cout <<  dimes << " dimes, ";
                }
	}

	if (nickels > 0) {
		if (nickels == 1) {
                        cout << nickels << " nickel, ";
                } else {
                        cout  << nickels << " nickels,  ";
		}
	}

	if (pennies > 0) {
		if (pennies == 1) {
                        cout << pennies << " penny";
                } else {
			cout << pennies << " pennies";
		}
	} 

	cout << " for " << total << " coins total." << endl;

return 0;

} // main

