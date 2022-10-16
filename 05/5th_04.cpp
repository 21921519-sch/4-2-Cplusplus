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
	Player user{200, 1000};
	Player* user_hp_ptf = &user;
	Player& user_hp_ref = user;

	cout << "현재 체력과 돈" << endl;
	cout << user.hp << " " << user.money << endl;

	user_hp_ref.hp = 100;
	user_hp_ref.money = 500;

	cout << "현재 체력과 돈" << endl;
	cout << user.hp << " " << user.money << endl;
}