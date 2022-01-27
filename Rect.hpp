#ifndef RECT_H
#define RECT_H

class Rect {
    protected:
	double width;
	double length;

    public:
	Rect(double l=0, double w=0);
	double getLength();
	double getWidth();
	double getArea();
	void   setDim(double len, double wid);
	double getPerimeter();
};
#endif
