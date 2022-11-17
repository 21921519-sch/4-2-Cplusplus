#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	string name;
public:
	Animal(string name = " ") :name{ name }
	{
		//cout << "animal������" << endl;
	}
	~Animal()
	{
		//cout << "animal�Ҹ���" << endl;
	}
	string getName()
	{
		return name;
	}
	virtual void speak()
	{
		cout << "???" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name) :Animal(name)
	{
		//cout << "cat������" << endl;
	}
	~Cat()
	{
		//cout << "cat�Ҹ���" << endl;
	}
	virtual void speak() override
	{
		//Animal::speak();
		cout << "��" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name) :Animal(name)
	{
		//cout << "dog������" << endl;
	}
	~Dog()
	{
		//cout << "dog�Ҹ���" << endl;
	}
	virtual void speak() override
	{
		//Animal::speak();
		cout << "��" << endl;
	}
};

int main()
{

	Cat cat("����");
	Dog dog("�����");

	Animal& animal0 = cat;
	Animal& animal1 = dog;

	animal0.speak();
	animal1.speak();
}