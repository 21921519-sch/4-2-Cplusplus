#include <iostream>
#include <array>
#include <vector>
#include "box.h"

using namespace std;

int main()
{
	box Box;
	Box.draw();

	Box.setBox(5, 7, '^');
	Box.draw();
}