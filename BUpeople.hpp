#include <iostream>
using namespace std;

class BethelPeople {
	protected:
		string address;
		string name;
	public:
		string emailaddress;
		string phonenumber;
}; // end BethelPeople

class Staff  : public BethelPeople {
	protected:
		string officeID;
}; // end Staff

class Teacher : public Staff {
	protected:
		string department;
		ClassSchedule profSchedule;
}; // end Teachers

class Student : public BethelPeople {
	protected:
		ClassSchedule studSchedule;
		int swipes;
		float GPA;
}; // end Students
