#include <iostream>
#include "rectangle.h"

using namespace std;

namespace factoryPattern
{
	Rectangle::Rectangle()
	{
		cout << "creater a rectangle!" << endl;
	}

	void Rectangle::draw()
	{
		cout << "Suppose you draw a rectangle!" << endl;
	}
}
