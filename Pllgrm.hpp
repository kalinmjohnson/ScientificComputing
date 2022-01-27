#include "Rect.hpp"
#include <iostream>
using namespace std; 

class Pllgrm : public Rect
{
	private:
		double angle;
	public:
		Pllgrm(double length, double width);
		Pllgrm(double length, double width, double angle);
		double getAngle();
		void setAngle(double angle);
		double getArea();
};

