#include <iostream>
#include "Compound.h"

using namespace std;


int main()
{
   // Create a compound
    Compound* c = new Compound(2);
    c->AddElement("Carbon", "C", 6, 4);
    c->AddElement("Hydrogen", "H", 1, 10);
    c->Print();
    delete c;

    Compound water(2);
    Compound hydrogenPeroxide(2);

    hydrogenPeroxide = water;

}
