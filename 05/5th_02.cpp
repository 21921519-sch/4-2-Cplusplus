#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

int main()
{
	string str;
	string str2{"abc"};

	cout << "�����ձ� ����" << endl;
	
	while (true)
	{
		cout << "���ڸ� �Է��Ͻÿ�." << endl;
		cin >> str;
		if ((str.empty()) || (str.back() == str2.front()))
		{
			str2 = str;
		}
		else
		{
			cout << "wrong" << endl;
			break;
		}
		cin >> str;
	}
	
}