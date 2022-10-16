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

	cout << "끝말잇기 시작" << endl;
	
	while (true)
	{
		cout << "문자를 입력하시오." << endl;
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