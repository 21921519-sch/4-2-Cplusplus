#include <iostream>

using namespace std;

class Rectangle
{
private:
	int width;
	int height;
public:
	void setRect(int x, int y)
	{
		width = x;
		height = y;
	}
	int getWidth()
	{
		return width;
	}
	int getHeight()
	{
		return height;
	}
	double calArea()
	{
		return width * height;
	}
};

int main()
{
	Rectangle rect;
	rect.setRect(10, 10);

	cout << rect.calArea() << endl;
}