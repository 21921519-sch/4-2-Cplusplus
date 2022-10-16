#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

int main()
{
	string numbers{};

	srand(time(NULL));
	int number;

	for (int i = 0; i < 10; i++)
	{
		number = (rand() % 26);
		numbers[i] = char(number);
	}

	cout << "array Ãâ·Â" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}
}