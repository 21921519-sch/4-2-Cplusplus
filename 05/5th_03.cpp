#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

int main()
{
	vector<string> bogi{ "human", "cat", "dog", "fish" };
	
	srand(time(NULL));
	int number;
	int answer;

	cout << "영어 단어의 뜻을 선택하시오. 1~4 외 다른 입력시 종료됩니다." << endl;
	while (true)
	{
		number = (rand() % 4);
		cout << bogi[number] << "?" << endl;
		cout << "(1)인간 (2)고양이 (3)개 (4)물고기 --> ";
		cin >> answer;
		if (answer == number + 1)
		{
			cout << "correct" << endl;
		}
		else if (answer == 1 || answer == 2 || answer == 3 || answer == 4)
		{
			cout << "wrong" << endl;
		}
		else
		{
			break;
		}
	}
	cout << "shut down" << endl;
}