#include <iostream>
#include <string>

class rectangle
{
private:
	int width;
	int height;
	std::string* color;
public:
	rectangle(int x, int y, std::string s) :width{ x }, height{ y }
	{
		color = new std::string;
		*color = s;
		std::cout << "������ ȣ��" << std::endl;
	}
	~rectangle()
	{
		delete color;
		std::cout << "�Ҹ��� ȣ��" << std::endl;
	}
	void print();

	double calArea();
};