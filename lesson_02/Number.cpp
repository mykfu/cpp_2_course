#include "Number.h"



ostream& operator<<(ostream& out, Number& rhs)
{
	out << rhs.to_string() << endl;
	return out;
}

string Number::to_string()
{
	return std::to_string(re);
}
