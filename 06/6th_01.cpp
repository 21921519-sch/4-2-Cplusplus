#include <iostream>

using namespace std;

class Rectangle
{
public:
	int width;
	int height;
	double calArea()
	{
		return width * height;
	}
};

int main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 4;

	cout << rect.calArea() << endl;
}