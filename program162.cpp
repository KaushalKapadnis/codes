#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Queue
{
    public:
        struct node<T> *Head;
        int Count;

        Queue();
        void Enqueue(T);   //Insert Last
		void Dequeue();    //DeleteFirst
        void Display();
        int CountNode();
};

template<class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void Queue<T>::Enqueue(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
		struct node<T> *temp = Head;
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}

		temp->next = newn;
    }
    Count++;
}

template<class T>
void Queue<T>::Dequeue()
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
void Queue<T>::Display()
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
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
	
	Queue<char> obj;
	Queue<int> obj1;
	obj.Enqueue('A');
	obj.Enqueue('B');
	obj.Enqueue('C');
	
	obj1.Enqueue(11);
	obj1.Enqueue(21);
	obj1.Enqueue(51);
	
	obj.Display();
	obj1.Display();
	
	obj.Dequeue();
	obj.Dequeue();
	obj.Dequeue();
	
	
	obj1.Dequeue();
	obj1.Dequeue();
	obj1.Display();
	
    return 0;
}

