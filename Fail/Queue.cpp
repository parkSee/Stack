#include <iostream>

using namespace std;
#define MAX 10
//FIFO

class Queue
{
public:
	int que[MAX];
	int front = -1;
	int rear = -1;
	int size;

	void push(int num) 
	{
		if (front == (rear + 1) % MAX)
		{
			cout << "°¡ µæ Â÷ÀÖ´Ù" << endl;
		}
		rear = (rear + 1) % MAX;
		que[rear] = num;

	}
	int pop()
	{
	
		front = (front + 1) % MAX;
		return que[front];
	}


	Queue(){}
	~Queue(){}


};


int main()
{
	
	Queue q;
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	for (int i = 0; i < 4; ++i)
	{
		cout << q.que[i] << endl;

	}
	cout << endl;
	cout << q.pop() << endl;
	for (int i = 0; i < 4; ++i)
	{
		cout << q.que[i] << endl;

	}
	return 0;
}
