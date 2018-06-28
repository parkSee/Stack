#include <iostream>

using namespace std;


class Node
{

	friend class List;

private:

	int value;
	Node* next;
	

public:
	Node()
		:next(NULL)
	{}
	~Node(){}

};

class List
{

private:

	Node * head;
	Node* tail;
	int size;

public:
	void printf()
	{
		Node* scan;
		scan = head;

		while (scan != NULL)
		{

			cout << scan->value << endl;
			scan = scan->next;

		}

	}

	void pushBack(int num)
	{
		Node* nextNode = new Node;
		nextNode->value = num;

		//헤드가 없으면
		if (head == NULL)
		{
			head = nextNode;
		}
		else
		{
			tail->next = nextNode;
		}
		tail = nextNode;
		size++;
	}

	int popBack()
	{
		int temp;
		Node* scan = head;
		
		while (scan != NULL)
		{
			if (scan->next == tail)
			{
				temp = scan->next->value;
				delete scan->next;
				scan->next = NULL;
				break;
			}
			else
			{
				scan = scan->next;
			}
				
		}
	
		tail = scan;
		return temp;
	}


	List()
		:head(NULL),tail(NULL)
	{}
	~List(){}


};




int main()
{
	List l;

	l.pushBack(3);
	l.pushBack(4);
	l.pushBack(5);
	
	
	
	cout <<l.popBack() <<endl;
	
	//l.printf();



	return 0;
}