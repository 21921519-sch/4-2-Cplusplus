#include <iostream>

using namespace std;

class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle(int x, int y)
	{
		width = x;
		height = y;
		cout << "생성자 호출" << endl;
	}
	~Rectangle()
	{
		cout << "소멸자 호출" << endl;
	}
	double calArea()
	{
		return width * height;
	}
};

int main()
{
	Rectangle rect1{ 7, 8 };
	Rectangle* rect2 = new Rectangle{10, 10};

	//cout << rect2.calArea() << endl;

	delete rect2;
}