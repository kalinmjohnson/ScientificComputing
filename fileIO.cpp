#include <iostream>
#include <fstream>
using namespace std;

int
main ()
{
	ofstream ofile;
	int name=7;
	string variable;

	cout << "say something: ";
	cin >> variable;

    	ofile.open("SeeSomething.txt");

	ofile << name << " [text:]" << variable << endl;
	
	ofile.close();

	return 0;
}//main
