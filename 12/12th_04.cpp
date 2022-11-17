#include <iostream>
#include <string>

using namespace std;

// 추상 클래스 (= 인터페이스)
class Shape
{
public:
	// 순수 가상 함수
	virtual double getArea() = 0;
};

class Circle : public Shape
{
private:
	int radius;
public:
	Circle(int r) :radius(r)
	{

	}
	virtual double getArea() override
	{
		return radius * radius * 3.14;
	}
};

class Square : public Shape
{
private:
	int width;
	int height;
public:
	Square(int w, int h) :width(w), height(h)
	{

	}
	virtual double getArea() override
	{
		return width*height;
	}
};

int main()
{
	Circle c(10);
	cout << c.getArea() << endl;

	Square square(10, 10);
	cout << square.getArea() << endl;
}