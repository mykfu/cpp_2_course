#include "Complex.h"
#include <string>

Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double re, double im)
{
	this->re = re;
	//(*this).re = re;
	this->im = im;
}

Complex::Complex(double re)
{
	this->re = re;
	this->im = 0;
}

string Complex::to_string()
{
	return std::to_string(re) + " " 
		+ (im == 0 ? "" :  
		((im < 0 ? "- i" : "+ i") 
			+  std::to_string(abs(im))));
}

const Complex Complex::operator+(const Complex & rhs)
{
	return Complex(re + rhs.re, im + rhs.im);
}

ostream& operator<<(ostream& out, Complex& rhs)
{
	out << rhs.to_string() << endl;
	return out;
}

istream& operator>>(istream& in, Complex& rhs)
{
	cout << "Enter re and im of Complex number:";
	in >> rhs.re >> rhs.im;
	return in;
}
