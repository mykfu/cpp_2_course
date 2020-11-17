#pragma once
#include<iostream>
#include"Number.h"
using namespace std;

class Complex : public Number
{
private:
	double re;
	double im;

public:
	Complex();

	//Complex(double re, double im = 0);
	Complex(double re, double im);
	
	Complex(double re);

	string to_string();

	const Complex operator+(const Complex & rhs);

	friend ostream& operator<<(ostream& out, Complex& rhs);
	friend istream& operator>>(istream& in, Complex& rhs);
};

