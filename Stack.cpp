#include <iostream>

using namespace std;

#define MAXNUM 10
//Stack 구현
//FIFO


class Stack
{
	


public:
	Stack(){}
	~Stack(){}

	int num[MAXNUM];
	int index = 0;

	//배열 사이즈 반환
	int Size()
	{
		return index;
	}

	//데이터 삽입
	void Push_back(int _num)
	{

		if (index == MAXNUM)
		{
			cout << "더이상 넣을 공간이 없습니다" << endl;
		}
		else if (index < MAXNUM)
		{
			num[index] = _num;
		}

		index++;
	}
	//데이터 삭제
	void Pop_back()
	{
		if (index == 0)
		{
			cout << "더이상 뺄 데이터가 없습니다" << endl;
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