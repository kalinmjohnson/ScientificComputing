#include "Rect.hpp"

/*
 * Rect - a Rectangle class
 *
 * constructor
 */
Rect::Rect(double len, double wid) {
	length = len;
	width = wid;
} 

// Rect::~Rect() { cout << "bye."<< endl; } // destructor

/*
 * implementation
 */
double
Rect::getLength() {
    return length;
}

double
Rect::getWidth()
{
    return width;
}

double
Rect::getArea()
{
    return length*width;
}

double
Rect::getPerimeter()
{
    return 2*(length+width);  // i.e., 2*length + 2*width;
}

void
Rect::setDim(double len, double wid)
{
    length = len;
    width = wid;
}

