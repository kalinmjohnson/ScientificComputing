#include <iostream>
using namespace std;

class Date {
	private:
		int mon;
		int day;
		int yr;
	public:
		Date();
		Date(int m, int d, int y);
		void printDate();
		void printEuroDate();
		void printStdDate();
};

Date::Date() {
	mon = 0;
	day = 0;
	yr = 0;
}

Date::Date(int m, int d, int y) {
	mon = m;
	day = d;
	yr = y; 	
}

void Date::printDate() {
	cout << mon << "/" << day << "/" << yr << endl;
} //print Date end

void Date::printEuroDate() {
	cout << day << "/" << mon << "/" << yr << endl;
} //print EuroDate end

void Date::printStdDate() {
	string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	cout << day << "-" << month[mon-1] << "-" << yr << endl;
} //print StdDate end

int
main ()
{
	Date today;
	today = Date(11, 17, 2021);
	

	today.printDate();
	today.printEuroDate();
	today.printStdDate();

	return 0;
} //main
