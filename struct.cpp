#include <iostream>
using namespace std;

/*
 *  *
 *   */

void
showMilTime(struct time205 ts) {
	cout << ts.hrs << ":";
        cout << ts.min << ":";
        cout << ts.sec;
}//showTime


void
showTime(struct time205 ts) {
	cout << ts.hrs << ":";
	cout << ts.min << ":";
	cout << ts.sec;
}//showMilTime

int
main()
{
	struct time205 {
                int hrs;
                int min;
                int sec;
                bool ampm;
        };

    	//change time205 to your struct type name
    	struct time205 now = {2,15,23,false};
    
        cout << "The time is: ";
        showTime(now);
        cout << endl;
    
        cout << "In the Navy that would be: ";
        showMilTime(now);
        cout << endl;
                                     
} // main




