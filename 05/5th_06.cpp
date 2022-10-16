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

	cout << "초기 상태" << endl;
	cout << "체력 : " << user.hp << ", 돈 : " << user.money << endl;

	while (true)
	{
		if (attack)
		{
			user_hp_ref.hp = (user_hp_ref.hp / 4);
			user_hp_ref.money = (user_hp_ref.money / 4);
			cout << "공격을 당했습니다." << endl;
		}
		else
		{
			cout << "공격을 당하지 않았습니다." << endl;
		}
		cout << "체력 : " << user.hp << ", 돈 : " << user.money << endl;
		attack = !attack;
		if (user_hp_ref.hp == 0)
		{
			cout << "체력이 0이 되었습니다." << endl;
			break;
		}
	}
}