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
	cout << ocents << " cents can be made using " << quarters << " quarters, " << dimes << "  dimes, " << nickels << " nickels, and " << pennies << " pennies for " << total << " coins total." << endl;

return 0;
} // main
