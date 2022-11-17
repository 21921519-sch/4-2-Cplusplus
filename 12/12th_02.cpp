#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	int age;
	string job;
public:
	Person(int age=0, string job="무직"):age{age},job{job}
	{

	}
	~Person()
	{

	}
	string eat()
	{
		return "음식을 먹을 수 있음\n";
	}
	string talk()
	{
		return "말할 수 있음\n";
	}
	string run()
	{
		return "뛸 수 있음\n";
	}
	void print() const
	{
		cout << "나의 직업: " << job << endl;
		cout << "나의 나이: " << age << endl;
	}
};

class Professor : public Person
{
public:
	Professor(int age, string job="교수") :Person(age, job)
	{

	}
	~Professor()
	{

	}
	string teach()
	{
		return "가르칠 수 있음\n";
	}
	void print()
	{
		Person::print();
		teach();
	}
};

class TennisPlayer : public Person
{
public:
	TennisPlayer(int age, string job="테니스선수") :Person(age, job)
	{

	}
	~TennisPlayer()
	{

	}
	string playTennis()
	{
		return "테니스 경기를 할 수 있음\n";
	}
	void print()
	{
		Person::print();
		playTennis();
	}
};

class Businessman : public Person
{
public:
	Businessman(int age, string job="대표") :Person(age, job)
	{

	}
	~Businessman()
	{

	}
	string runBusiness()
	{
		return "사업을 운영할 수 있음\n";
	}
	void print()
	{
		Person::print();
		runBusiness();
	}
};

int main()
{
	Professor prof(38);
	prof.print();

	cout << "-------------------------" << endl;

	TennisPlayer player(23);
	player.print();

	cout << "-------------------------" << endl;

	Businessman man(45);
	man.print();
}