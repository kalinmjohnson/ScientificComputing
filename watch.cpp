#include <iostream>
#include "time205.hpp"
using namespace std;

int
main () {
	struct Time time205;
	struct Time *tptr;
	struct Time *first;
	struct Time *other;
	time205.hrs = 1;
	time205.min = 22;
	time205.sec = 43;
	time205.ampm = false;
	tptr = & time205;
	

	printTime(tptr);
	printMilTime(tptr);
	compareTimes(first, other);

	return 0;
} //main
