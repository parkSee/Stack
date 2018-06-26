# Stack#include <iostream>

using namespace std;

#define MAXNUM 10
//Stack ����
//FIFO


class Stack
{
	


public:
	Stack(){}
	~Stack(){}

	int num[MAXNUM];
	int index = 0;

	//�迭 ������ ��ȯ
	int Size()
	{
		return index;
	}

	//������ ����
	void Push_back(int _num)
	{

		if (index == MAXNUM)
		{
			cout << "���̻� ���� ������ �����ϴ�" << endl;
		}
		else if (index < MAXNUM)
		{
			num[index] = _num;
		}

		index++;
	}
	//������ ����
	void Pop_back()
	{
		if (index == 0)
		{
			cout << "���̻� �� �����Ͱ� �����ϴ�" << endl;
		}

		index--;
		num[index];
		
	}

};

int main()
{

	Stack s;

	s.Push_back(2);
	s.Push_back(3);
	s.Push_back(4);
	s.Push_back(5);

	s.Pop_back();


	for (int i = 0; i < s.Size(); ++i)
	{
		cout <<s.num[i] << endl;
	}

	
	cout << s.Size() << endl;

	return 0;
}
