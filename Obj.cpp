#include <iostream>
#include <string>
using namespace std;

int
main () {
	string myCity = "Seattle";


	myCity.append(", WA");
	myCity.at(4);
	myCity.append(" is where I live.");
	myCity.find('e', 3);

	myCity.clear();
	
	myCity = "Arden Hills";
	myCity.at(0);

	return 0;
} //main
