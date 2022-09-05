#include<iostream>

using namespace std;

template <class T>
struct Dnode
{
	T data;
	struct Dnode<T> *next;
	struct Dnode<T> *prev;
};

template <class T>
class DoublyLL
{
	private :
		struct Dnode<T> *Head;
		int Count;
		
	public :
		DoublyLL();
		void InsertFirstD(T no);
		void DisplayD();
};

template<class T>
DoublyLL<T>::DoublyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void DoublyLL<T>::InsertFirstD(T no)
{
	struct Dnode<T> *newn = NULL;
	newn = new Dnode<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	newn -> prev = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	
	Count++;
}

template<class T>
void DisplayD()
{
	struct Dnode<T> temp = NULL;
	
	while(temp != NULL)
	{
		cout<<"| "<<temp -> data<<" |->";
		temp = temp -> next;
	}
	cout<<endl;
}

int main()
{
	DoublyLL<int> obj;
	
	obj.InsertFirstD(51);
	obj.InsertFirstD(21);
	obj.InsertFirstD(11);
	
	obj.DisplayD();
	
	return 0;
}