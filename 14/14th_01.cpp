#include <iostream>
#include <string>
#include <ostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Player
{
private:
	string name;
public:
	Player(string n):name{n}
	{

	}
	~Player()
	{

	}
	string getName()
	{
		return name;
	}
	int go(int x)
	{
		cin >> x;
		return x;
	}
};

static int top = 10;
static int bottom = 0;
static int answer = 0;
class UpAndDownGame
{
private:
	Player* players;
public:
	UpAndDownGame(Player* players)
	{

	}
	~UpAndDownGame()
	{

	}
	bool check(int a)
	{
		if (a == answer)
		{
			return true;
		}
		else
		{
			if (a <= top || a >= answer)
			{
				top = a;
			}
			else if (a >= bottom || a <= answer)
			{
				bottom = a;
			}
			else
			{
				throw "out of range";
			}
		}
	}
	void run()
	{
		srand((unsigned)time(0)); // 항상 다른 랜덤수를 발생시키기 위한 seed 설정
		int n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수가 n에 발생
		n = n % 10; // n은 0~10 사이의 정수
		answer = n;
		cout << "정답은: " << answer << endl;
		int index = 0;
		while (true)
		{
			try
			{
				check(Player::go());
				++index;
				index %= 2;
			}
			catch (const char* e)
			{
				cout << e << endl;
			}
		}
	}
};

int main()
{
	// 2명의 Player에 대한 정적 객체 배열 정의
	Player player1("김철수");
	Player player2("이영희");

	UpAndDownGame game(player);
	game.run();
}
