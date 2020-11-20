#pragma once
using namespace System;

ref class Nodes abstract
{
protected:
	UInt32 count;
	double left;
	double right;

public:
	Nodes(UInt32 count);
	Nodes(UInt32 count, double left, double right);

	property UInt32 Count {
		UInt32 get();
		void set(UInt32);
	}

	property double Left;
	property double Right;

	virtual property double Node[unsigned int] {
		double get(int ind) = 0;
	}

};

