#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
class Queue
{
private:
	std::vector<T> items;
public:
	Queue() : items{new items}
	{

	}
	~Queue()
	{

	}
	void push(T item)
	{
		items.push_back(item);
	}
	void pop()
	{
		items.pop_back();
	}
	T top() //ÀÚ·áÇü T
	{
		items.back();
	}
	void print()
	{
		for (int i = 0; i < items.size(); ++i)
		{
			cout << items[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	Queue<int> q0;
	q0.push(10);
	q0.push(20);
	q0.push(30);
	q0.push(40);
	q0.push(50);
	cout << q0.top() << endl;
	q0.print();
	q0.pop();
	q0.print();
	cout << q0.top() << endl;
	cout << endl;

	Queue<std::string> q1;
	q1.push("hello");
	q1.push("world");
	q1.print();
	cout << q1.top() << endl;
	q1.pop();
	q1.print();
}