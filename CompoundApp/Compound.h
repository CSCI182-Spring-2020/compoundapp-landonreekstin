#pragma once
#include <iostream>
#include "ElementAmount.h"

class Compound
{
private:
	ElementAmount* _elementAmount = NULL;
	int index = 0;
	int maxElements = 0;

public:
	Compound(int nNumberElements);
	~Compound();

	void AddElement(string name, string symbol, int atomicWeight, int atomCount);
	void Print();

	// Copy Constructor
	Compound(const Compound&);

	// Assignment Operator
	Compound& operator=(const Compound&);
};

