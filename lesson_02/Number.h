#pragma once
#include<string>
#include<iostream>
using namespace std;

class Number
{
protected:
	double re;

public:
	Number(int re = 0) : re(re) {}

	virtual string to_string();
	friend ostream& operator<<(ostream& out, Number& rhs);
};

