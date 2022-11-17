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
		cout << "animal생성자" << endl;
	}
	~Animal()
	{
		cout << "animal소멸자" << endl;
	}
	string getName()
	{
		return name;
	}
	void speak()
	{
		cout << "???" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name) :Animal(name)
	{
		cout << "cat생성자" << endl;
	}
	~Cat()
	{
		cout << "cat소멸자" << endl;
	}
	void speak()
	{
		Animal::speak();
		cout << "냥" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name) :Animal(name)
	{
		cout << "dog생성자" << endl;
	}
	~Dog()
	{
		cout << "dog소멸자" << endl;
	}
	void speak()
	{
		Animal::speak();
		cout << "멍" << endl;
	}
};

int main()
{
	Animal animal;
	Cat cat("나비");
	Dog dog("흰둥이");
	
	animal.speak();

	cout << cat.getName() << " ";
	cat.speak();

	cout << dog.getName() << " ";
	dog.speak();
	
}
