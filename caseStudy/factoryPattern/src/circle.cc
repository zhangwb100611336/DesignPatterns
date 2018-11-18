#include "circle.h"
#include <iostream>
using namespace std;

namespace factoryPattern
{
	Circle::Circle()
	{
		cout<<	"creat the instace:Circle!" << endl;
	}
	void Circle::draw()
	{
		cout << "Suppose you draw a circle"<< endl;
	}
}
