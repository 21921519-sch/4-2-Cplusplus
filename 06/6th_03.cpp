#include <iostream>

using namespace std;

class Rectangle
{
private:
	int width;
	int height;
public:
	/*
	Rectangle()
	{
		width = 5;
		height = 5;
	}
	*/
	/*
	Rectangle(int x, int y)
	{
		width = x;
		height = y;
	}
	*/
	Rectangle(int x = 10, int y = 10)
	{
		width = x;
		height = y;
	}

	double calArea()
	{
		return width * height;
	}
};

int main()
{

	//Rectangle rect0;
	//Rectangle rect1{ 7, 8 };
	Rectangle rect2;

	//cout << rect0.calArea() << endl;
	//cout << rect1.calArea() << endl;
	cout << rect2.calArea() << endl;
}