#include "rectangle.h"
#include <iostream>

void rectangle::print()
{
	std::cout << width << " " << height << " " << *color << std::endl;
}

double rectangle::calArea()
{
	return width * height;
}
