#include <iostream>
#include <string>
#include <random>

using namespace std;

/*
struct Person
{
	int number;
	double tall;
	double height;
	string name;
	eyes Eyesight;
};

union eyes
{
	double left_eye;
	double right_eye;
};

enum fonts
{
	Bold = 1,
	Underline = 2,
	Italic = 4,
	Strikethrough = 8
};
*/
/*
int fib(int n)
{
	if (n <= 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

double sincos(int &n)
{
	double pi = 3.141592;
	double radian = n * pi / 180.0;
}
*/
/*
int x2(int& n)
{
	n = n * 2;
	return n;
}
*/
int main()
{
	/*
	array<int, 5> arr0{};
	arr0 = { 1,2,3,4,5 };
	cout << arr0.size() << endl;

	cout << arr0.front() << endl;
	cout << arr0.back() << endl;

	array<int, 5> arr1 = { 5,4,3,2,1 };
	arr1.swap(arr0);
	*/

	/*
	Person person;
	person.number = 1;
	person.tall = 160.3;
	person.height = 55.5;
	person.name = "Sunny";

	eyes Eyesight;
	Eyesight.left_eye = 1.5;
	Eyesight.right_eye = 1.5;
	*/

	/*
	int textattrs = 0;
	textattrs |= Bold;
	textattrs |= Italic;

	cout << "dd" << endl;
	if(textattrs & Bold)
		cout << "ss" << endl;
	if(textattrs & Italic)
		cout << "aa" << endl;
	*/

	/*
	int num[5] = {1,2,3,4,5};
	string str = "david";

	int* ptr = num;
	for (int i : num)
	{
		cout << ptr[i] << " ";
	}
	*/

	/*
	int* ptr = nullptr;

	if (ptr == nullptr)
	{
		cout << "새로운 값 : ";
		cin >> *ptr;
	}

	if (ptr == nullptr)
	{
		cout << "새로운 값 : ";
		cin >> *ptr;
	}
	else
	{
		cout << "ptr : " << &ptr << endl;
	}
	*/
	/*
	int* ptr = new int[10];

	random_device rd;
	mt19937_64 mersenne(rd());
	uniform_int_distribution<> score(0, 100);

	for (int i = 0; i < 10; i++)
	{
		ptr[i] = score(mersenne);
		cout << ptr[i] << " ";
	}
	
	int high = numeric_limits<int>::lowest();
	cout << endl << "최고점은: " << high << endl;
	*/

	/*
	vector<int>fibonacci{ 0,1,1,2,3,5,8,13,21,34,55,89 };

	cout << fibonacci.size() << endl;

	for (auto& number : fibonacci)
		cout << number << ' ';

	cout << endl;
	*/
	/*
	cout << "30도를 sin, cos 값으로 변환해보자" << endl;
	cout << "변환된 sin 값: " << sin(sincos(30)) << endl;
	cout << "변환된 cos 값: " << cos(sincos(30)) << endl;
	*/

	/*
	int num1[5] = { 5,4,3,2,1 };
	for (int i = 0; i < 5; i++)
	{
		x2(num1[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << num1[i] << " ";
	}
	cout << endl;
	*/
}
