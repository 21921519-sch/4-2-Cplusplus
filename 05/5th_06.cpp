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

	while (true)
	{
		if (attack)
		{
			user_hp_ref.hp = (user_hp_ref.hp / 4);
			user_hp_ref.money = (user_hp_ref.money / 4);
			cout << "������ ���߽��ϴ�." << endl;
		}
		else
		{
			cout << "������ ������ �ʾҽ��ϴ�." << endl;
		}
		cout << "ü�� : " << user.hp << ", �� : " << user.money << endl;
		attack = !attack;
		if (user_hp_ref.hp == 0)
		{
			cout << "ü���� 0�� �Ǿ����ϴ�." << endl;
			break;
		}
	}
}