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

	int i = 0;
	while (i < 2)
	{
		if (attack)
		{
			user_hp_ref.hp = (user_hp_ref.hp / 2);
			user_hp_ref.money = (user_hp_ref.money / 2);
			cout << "공격을 당했습니다." << endl;
		}
		else
		{
			cout << "공격을 당하지 않았습니다." << endl;
		}
		cout << "체력 : " << user.hp << ", 돈 : " << user.money << endl;
		attack = !attack;
		i++;
	}
}