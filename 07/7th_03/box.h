#include <iostream>
#include <array>
#include <vector>

class box
{
private:
	int height;
	int width;
	char charge;
public:
	box():height{ 3 }, width{ 3 }, charge{ '*' }
	{
	}
	~box()
	{
	}
	void setBox(int h, int w, char c);
	void draw();
};