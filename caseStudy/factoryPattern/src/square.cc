#include "square.h"
#include <iostream>

namespace factoryPattern
{
	Square::Square()
	{
		cout << "there is create a square!" << endl;
	}
	void Square::draw()
	{
		cout << "Supose you draw a square" << endl;
	}
}
