#include <iostream>
#include <array>
#include <vector>

using namespace std;

void change_array(int& x, int& y);

int main()
{
	array<int, 5> num1 = { 1,3,5,7,9 };
	array<int, 5> num2 = { 2,4,6,8,10 };

	cout << "ù��° array ���" << endl;
	for (int i = 0; i < num1.size(); i++)
	{
		cout << num1[i] << " ";
	}
	cout << endl;
	cout << "�ι�° array ���" << endl;
	for (int i = 0; i < num2.size(); i++)
	{
		cout << num2[i] << " ";
	}
	cout << endl;

	for (int i = 0; i <= 4; i++)
	{
		change_array(num1[i], num2[i]);
	}
	cout << "-------------------------------" << endl;
	cout << "�迭 �� ��ȯ �Լ� ȣ�� ��" << endl;


	cout << "ù��° array ���" << endl;
	for (int i = 0; i < num1.size(); i++)
	{
		cout << num1[i] << " ";
	}
	cout << endl;
	cout << "�ι�° array ���" << endl;
	for (int i = 0; i < num2.size(); i++)
	{
		cout << num2[i] << " ";
	}
	cout << endl;
}

void change_array(int& x, int& y)
{
	swap(x, y);
}