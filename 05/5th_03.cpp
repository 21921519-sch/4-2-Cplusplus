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

	cout << "���� �ܾ��� ���� �����Ͻÿ�. 1~4 �� �ٸ� �Է½� ����˴ϴ�." << endl;
	while (true)
	{
		number = (rand() % 4);
		cout << bogi[number] << "?" << endl;
		cout << "(1)�ΰ� (2)����� (3)�� (4)����� --> ";
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