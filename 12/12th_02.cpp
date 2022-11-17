#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	int age;
	string job;
public:
	Person(int age=0, string job="����"):age{age},job{job}
	{

	}
	~Person()
	{

	}
	string eat()
	{
		return "������ ���� �� ����\n";
	}
	string talk()
	{
		return "���� �� ����\n";
	}
	string run()
	{
		return "�� �� ����\n";
	}
	void print() const
	{
		cout << "���� ����: " << job << endl;
		cout << "���� ����: " << age << endl;
	}
};

class Professor : public Person
{
public:
	Professor(int age, string job="����") :Person(age, job)
	{

	}
	~Professor()
	{

	}
	string teach()
	{
		return "����ĥ �� ����\n";
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
	TennisPlayer(int age, string job="�״Ͻ�����") :Person(age, job)
	{

	}
	~TennisPlayer()
	{

	}
	string playTennis()
	{
		return "�״Ͻ� ��⸦ �� �� ����\n";
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
	Businessman(int age, string job="��ǥ") :Person(age, job)
	{

	}
	~Businessman()
	{

	}
	string runBusiness()
	{
		return "����� ��� �� ����\n";
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