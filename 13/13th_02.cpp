#include <iostream>
#include <ostream>
#include <string>

using namespace std;

template<typename T, int N>
class Queue
{
private:
	size_t size;
	T items[N]; //�����迭
public:
	Queue() : size{ 0 }, items{[N]} // N��ŭ ����ũ�� �Ҵ�
	{

	}
	~Queue()
	{

	}
	void push(T item)
	{
		try
		{
			if (size < N)
			{
				//size=0
				items[size] = item;
				size++;
			}
			else
			{
				throw "overflow";
			}
		}
		catch (const char* e)
		{
			cout << e << endl;
		}
	}
	void pop()
	{
		try
		{
			if (size == 0)
			{
				throw "underflow";
			}
			else
			{
				for (int i = 1; i < size; ++i)
				{
					items[i - 1] = items[i];
				}
				--size;
			}
		}
		catch (const char* e)
		{
			cout << e << endl;
		}
		
	}
	T top() //�ڷ��� T
	{
		try
		{
			if (size == 0)
			{
				throw "underflow";
			}
			else
			{
				return items[size - 1];
			}
		}
		catch (const char* e)
		{
			cout << e << endl;
		}
	}
	void print()
	{
		try
		{
			if (size == 0)
			{
				throw "No item";
			}
			else
			{
				for (int i = 0; i < size; ++i)
				{
					cout << items[i] << " ";
				}
				cout << endl;
			}
		}
		catch (const char* e)
		{
			cout << e << endl;
		}
	}
};

int main()
{
	Queue<int, 3> q0;
	q0.push(1);
	q0.push(2);
	q0.push(4);
	// overflow ���� �߻� ���
	//q0.push(6);
	// underflow ���� �߻� ���
	 
	// No data ���� �߻� ���
}