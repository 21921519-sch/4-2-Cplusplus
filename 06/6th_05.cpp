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
		cout << "������ ȣ��" << endl;
	}
	~Rectangle()
	{
		cout << "�Ҹ��� ȣ��" << endl;
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