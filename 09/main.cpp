#include <iostream>
#include <array>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int student_number;
public:
	Student() :name{ name }, student_number{ student_number }
	{
		this->name = name;
		this->student_number = student_number;
	}
	void print()
	{
		cout << "(" << name << "," << student_number << ")" << endl;
	}
};

class Lab
{
private:
	string* lab_name;
	bool lab_head;
	int student_count;
	static int lab_num;
	Student student;
public:
	Lab() :lab_name{ nullptr }, lab_head{ 0 }, student_count{ 0 }
	{
		++lab_num;
	}
	Lab(string* lab_name, bool lab_head, int student_count, static int lab_num)
	{
		this->lab_name = lab_name;
		this->lab_head = lab_head;
		this->student_count = student_count;
		this->lab_num = lab_num;
		++lab_num;
	}
	void add_student(int num)
	{
		this->student_count = student_count + num;
	}
	void print()
	{
		if (!lab_name)
		{
			cout << "연구실 정보가 없습니다." << endl;
		}
		else
		{
			cout << "연구실 이름: " << lab_name << endl;
			cout << "실장 여부: " << lab_head << endl;
			cout << "연구실 인원: " << student_count << endl;
			cout << "연구실 번호: " << lab_num << endl;
			student.print();
		}
	}
	int getNumber()
	{
		this->student_count = student_count;
		return student_count;
	}
	Lab& checkNumber(Lab& lab)
	{
		if (this->student_count > lab.student_count)
		{
			return *this;
		}
		else
		{
			return lab;
		}
	}
	void moreNumber()
	{
		cout << &lab_name << " 인원이 더 많다" << endl;
	}
};

void applyLab(Lab lab00, int num)
{
	lab00.add_student(num);
}
/*
Lab createLab()
{
	Lab lab00;
	lab00.lab_name = new string{ "영상처리 연구실" };
	return lab00;
}
*/
int main()
{
	Lab lab01;
	lab01.print();
	//lab01 = createLab();
	lab01.print();
	cout << "------------------------------" << endl;
	Student students[5] =
	{
		{"홍길동","202201"},
		{"이춘향","202202"},
		{"이몽룡","202203"}
	};

	Lab lab02;
	
	lab02.print();

	applyLab(lab02, 2);
	lab02.print();

	lab01.checkNumber(lab02).moreNumber();
}