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
		/* size��ŭ p ���� �Ҵ��ϰ� �� �ֱ� */
		T* p = new T[size];
	}
	/* �� AddArray ���� ������ ����*/
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
	/* �� operator+ �Լ� ����*/
	AddArray operator+(const T* p[]) const
	{

	}
	/* �� operator= �Լ� ����*/
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
	c = a + b; // ��������� �ʿ�
	a.show();
	b.show();
	c.show();
}