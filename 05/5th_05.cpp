#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

struct Player
{
	int hp;
	int money;
};

int main()
{
	Player user{ 100, 1000 };
	Player* user_hp_ptf = &user;
	Player& user_hp_ref = user;

	bool attack = true;

	cout << "�ʱ� ����" << endl;
	cout << "ü�� : " << user.hp << ", �� : " << user.money << endl;

	int i = 0;
	while (i < 2)
	{
		if (attack)
		{
			user_hp_ref.hp = (user_hp_ref.hp / 2);
			user_hp_ref.money = (user_hp_ref.money / 2);
			cout << "������ ���߽��ϴ�." << endl;
		}
		else
		{
			cout << "������ ������ �ʾҽ��ϴ�." << endl;
		}
		cout << "ü�� : " << user.hp << ", �� : " << user.money << endl;
		attack = !attack;
		i++;
	}
}