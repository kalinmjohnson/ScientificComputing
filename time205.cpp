#include <iostream>
#include "time205.hpp"
using namespace std;

void printTime (struct Time *tptr) {

	cout << tptr -> hrs << ":";
        cout << tptr -> min << ":";
        cout << tptr -> sec << " ";
	if (tptr -> ampm == true) {
		cout << "a.m." << endl;
	} else {
		cout << "p.m." << endl;
	}

}//showTime

void printMilTime (struct Time *tptr) {
	if (tptr -> ampm == true) {
		cout << tptr -> hrs << ":";
        } else {
		cout << tptr -> hrs + 12 << ":";
	}
	cout << tptr -> min << ":";
        cout << tptr -> sec << endl;

}//showMilTime

int compareTimes (struct time205 *first, struct time205 *other) {
	if (first.hrs < other.hrs) {
		return -1;
	} 
	if (first.hrs > other.hrs) {
                return 1;
        }

	if (first.min < other.min) {
                return -1;
        } 
	if (first.min > other.min) {
                return 1;
        }
	
	if (first.sec < other.sec) {
                return -1;
        }
        if (first.sec > other.sec) {
                return 1;
        }

	return 0;

} //compareTimes
