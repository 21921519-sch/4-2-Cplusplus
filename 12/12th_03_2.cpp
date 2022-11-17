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
		//cout << "animal积己磊" << endl;
	}
	~Animal()
	{
		//cout << "animal家戈磊" << endl;
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
		//cout << "cat积己磊" << endl;
	}
	~Cat()
	{
		//cout << "cat家戈磊" << endl;
	}
	virtual void speak() override
	{
		//Animal::speak();
		cout << "成" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name) :Animal(name)
	{
		//cout << "dog积己磊" << endl;
	}
	~Dog()
	{
		//cout << "dog家戈磊" << endl;
	}
	virtual void speak() override
	{
		//Animal::speak();
		cout << "港" << endl;
	}
};

int main()
{

	Cat cat("唱厚");
	Dog dog("闰嫡捞");

	Animal& animal0 = cat;
	Animal& animal1 = dog;

	animal0.speak();
	animal1.speak();
}