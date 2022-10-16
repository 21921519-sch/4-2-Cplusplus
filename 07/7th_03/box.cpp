#include "box.h"
#include <iostream>
#include <array>
#include <vector>

void box::setBox(int h, int w, char c)
{
	height = h;
	width = w;
	charge = c;
}

inline void box::draw()
{
	for (int i = 1; i <= height; i++)
	{
		for (int i = 1; i <= width; i++)
		{
			std::cout << charge;
		}
		std::cout << std::endl;
	}
}
