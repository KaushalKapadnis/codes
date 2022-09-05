
//|||||||  STACK  |||||||

#include<iostream>

using namespace std;

template<class T>
struct node
{
	T data;
	struct node<T> next;
};

template<class T>
class Stack
{
	private :
		struct node<T> *Head;
		int Count;

		
	public :
		Stack();
};/*
		//void Push(int);
		//void Pop(int);
		//void Display();
	
};*/

Stack<T>::Stack()
{}
/*
void Stack<T>::Push(int)
//{}

//void Stack<T>::Pop(int)
//{}

//void Stack<T>::Display()
//{}
*/
int main()
{
	
	
	
	return 0;
}