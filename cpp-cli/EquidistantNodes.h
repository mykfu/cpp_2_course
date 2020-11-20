#pragma once
#include "Nodes.h"
using namespace System;
ref class EquidistantNodes : public Nodes
{

public:
	virtual property double Node[unsigned int]{
		double get(int ind) override {
			if (ind >= Count) throw "error";
			return Left + (Right - Left) / (Count - 1);
		}
	}

};

