#include <iostream>
#include "Compound.h"
#include "ElementAmount.h"

using namespace std;

//Constructor
Compound::Compound(int nNumberElements)
{
	maxElements = nNumberElements;
	_elementAmount = new ElementAmount[nNumberElements];
}

// Destructor
Compound::~Compound()
{
	if (_elementAmount != NULL)
		delete[] _elementAmount;
}

// Copy Constructor
Compound::Compound(const Compound& oldCompound)
{
	maxElements = oldCompound.maxElements;
	_elementAmount = new int[maxElements];
	for (int i = 0; i < maxElements; i++)
	{
		_elementAmount[i] = *oldCompound._elementAmount;
	}
}

// Assignment Operator
Compound& Compound::operator=(const Compound& oldCompound)
{
	maxElements = oldCompound.maxElements;
	_elementAmount = new int[maxElements];
	for (int i = 0; i < maxElements; i++)
	{
		_elementAmount[i] = *oldCompound._elementAmount;
	}
	return *this;
}

// Add new element to compound
void Compound::AddElement(string name, string symbol, int atomicWeight, int atomCount)
{
	if (index < maxElements)
	{
		_elementAmount[index].AddElementAmount(name, symbol, atomicWeight, atomCount);
		index++;
	}
}

void Compound::Print()
{
	for (int i = 0; i < maxElements; i++)
	{
		_elementAmount[i].PrintElementAmount();
	}
}