#include <iostream>
#include <string>
#include <ostream>
#include <ctime>
#include <cstdlib>

using namespace std;

template <typename T>
class AddArray
{
private:
	int size;
	T* p;
public:
	AddArray() :size(0), p(nullptr) 
	{
		
	}
	AddArray(T p[], int size) :size(size)
	{
		/* size만큼 p 동적 할당하고 값 넣기 */
		T* p = new T[size];
	}
	/* ① AddArray 복사 생성자 생성*/
	AddArray(const T& p[])
	{
		for (int i : p)
		{
			
		}
		
	}
	~AddArray()
	{
		if (p != nullptr) delete[] p;
	}
	/* ② operator+ 함수 생성*/
	AddArray operator+(const T* p[]) const
	{

	}
	/* ③ operator= 함수 생성*/
	AddArray operator=(const T* p[]) const
	{

	}
	void show()
	{
		for (int i = 0; i < size; ++i)
			cout << p[i] << " ";
		cout << endl;
	}
};

int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	AddArray<int> a(n, 3);
	AddArray<int> b(m, 4);
	AddArray<int> c;
	c = a + b; // 복사생성자 필요
	a.show();
	b.show();
	c.show();
}