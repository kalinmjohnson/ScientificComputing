#include <string>
#include <iostream>
using namespace std;

/*
 * Short form of the date class
 */

class Date {
    private:
        int year;
        int day;
	int mon;
    public:
        Date();
        Date(int year, int mon, int day);
        void printStdDate();
	void setmonth(int m);
};

void Date::printStdDate() {
      string month[]= {"", "Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};
      // cout << "-" << month[mon] << "-" ;
      
      string mos = "JanFebMarAprMayJunJulAugSepOctNovDec";
      cout << day ;
      cout << "-" << mos.substr((mon-1)*3, 3) << "-" ;
      cout << year << endl;
};

Date::Date() { day = 0; year = 0; mon = 0; }

Date::Date(int dayval, int monval, int yearval) {
        day = dayval;
        mon = monval;
        year = yearval;
}

void Date::setmonth(int newmon) {
	if (newmon < 12 && newmon >= 0) {
		mon = newmon;
	}
}

int
main() {
	
	Date today(17,11,2021);
	today.setmonth(15);
	today.printStdDate();
} // main
