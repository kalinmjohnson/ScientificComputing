#include "Pllgrm.hpp"
#include <iostream>
#include <math.h>
using namespace std;


//Constructors

Pllgrm::Pllgrm (double l, double w) {
        length = l;
        width = w;
        angle = 3.1415926535/2;
}//end constructor 1

Pllgrm::Pllgrm (double l, double w, double a) {
        length = l;
        width = w;
        angle = a;
}//end constructor 2


//Functions

double Pllgrm::getAngle() {
        return angle;
} //end getAngle

void Pllgrm::setAngle(double a) {
        angle = a;
}// end setAngle

double Pllgrm::getArea() {
	double theta;
	if (angle > 90) {
		theta = angle - 90;
	} else {
		theta = angle;
	}
        return length * width * sin(theta);
} //end getArea
