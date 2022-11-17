#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "부모생성" << endl;
	}
	virtual ~Base()
	{
		cout << "부모소멸" << endl;
	}
	virtual void func() const
	{
		cout << "부모함수" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "자식생성" << endl;
	}
	~Derived()
	{
		cout << "자식소멸" << endl;
	}
	virtual void func() const override
	{
		cout << "자식함수" << endl;
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