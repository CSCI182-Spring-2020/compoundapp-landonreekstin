#include <iostream>
#include "Element.h"

using namespace std;

Element::Element(string name, string  symbol, int atomicNumber)
{
	_name = name;
	_symbol = symbol;
	_atomicNumber = atomicNumber;
}

void Element::PrintElement()
{
	// Print the element
	cout << _name << "\t" << _symbol << "\t" << _atomicNumber << endl;
}