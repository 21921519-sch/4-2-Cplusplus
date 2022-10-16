#include <iostream>
#include <array>
#include <vector>

using namespace std;

void num1_print(int *nums)
{
	for (int i=0; i<=4;i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}

void num2_print(int &nums)
{
	for (int i = 0; i <= 4; i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}

void num3_print(int *nums)
{
	for (int i = 0; i <= 4; i++)
	{
		cout << nums[i] << " ";
	}
	int j = 0;
	cout << endl;
}

int main()
{
	//c-style�� �迭
	int num1[] = { 1,3,5,7,9 };
	//array Ŭ����
	array<int, 5> num2 = { 1,3,5,7,9 };
	//vector Ŭ����
	vector<int> num3 = { 1,3,5,7,9 };

	num1_print(num1);
	num2_print(num2);
	num3_print(num3);
}