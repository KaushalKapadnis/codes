/*
     |||||||***  STACK  ***|||||||
*/
#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Stack
{
    public:
        struct node<T> *Head;
        int Count;

        Stack();
        void Push(T);   
		void Pop();   
        void Display();
        int CountNode();
};

template<class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Stack<T>::Push(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

	newn -> next = Head;
	Head = newn;
  
    Count++;
}

template<class T>
void Stack<T>::Pop()
{
	T no;
	
	if(Head == NULL)
	{
		cout<<"No element in Queue "<<endl;
		return ;
	}
	
	struct node<T> *temp = NULL;
	no = Head -> data;
	
	temp = Head;
	
	Head = Head -> next;
	delete (temp);
	
	
	Count--;
	cout<<"Removed element is "<<no<<endl;
}

template<class T>
void Stack<T>::Display()
{
    cout<<"Elements from Linked list are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
	
	Stack<char> obj;
	Stack<int> obj1;
	
	obj.Push('A');
	obj.Push('B');
	obj.Push('C');
	obj.Push('D');
	
	obj.Display();
	
	obj.Pop();
	obj.Pop();
	
	
	obj.Push('Z');
	
	obj.Display();
	
	obj.Pop();
	
	obj.Display();
	
    return 0;
}

