#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "�θ����" << endl;
	}
	virtual ~Base()
	{
		cout << "�θ�Ҹ�" << endl;
	}
	virtual void func() const
	{
		cout << "�θ��Լ�" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "�ڽĻ���" << endl;
	}
	~Derived()
	{
		cout << "�ڽļҸ�" << endl;
	}
	virtual void func() const override
	{
		cout << "�ڽ��Լ�" << endl;
	}
};

void any(Base& b)
{
	b.func();
}

int main()
{
	Base* base = new Derived;
	base->func();

	Derived d;
	Base& base2 = d;
	base2.func();

	delete base;
}