#include "Circle.h"


Circle::Circle(double radius, const char* color) {
	this->radius = radius;
	this->color = color;
}

double Circle::getRadius() {
	return radius;
}

const char* Circle::getColor() {
	return color;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}


double Circle::getArea() {
	return M_PI * radius * radius;
}
double Circle::getLength() {
	return 0;
}