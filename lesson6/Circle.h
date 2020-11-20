#pragma once
#define M_PI 3.1415
class Circle
{ 
protected:
	double radius;
	const char* color;

public:

	Circle(double radius, const char* color);

	double getRadius();
	const char* getColor();

	void setRadius(double radius);

	double getArea();
	double getLength();


};

