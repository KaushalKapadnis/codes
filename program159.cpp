#include<iostream>

using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	private :
		struct node<T> *Head;
		int Count;
		
	public :
	
		SinglyLL();
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPos(T no, int iPos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int iPos);
		void Display();
		int CountNode();
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		Head -> next = newn;
	}
	
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node<T> *temp = NULL;
		temp = Head;
		
		while((temp -> next) != NULL)
		{
			temp = temp -> next;
		}
		
		temp -> next = newn;
	}
	
	Count++;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{
	if(iPos < 0 || iPos > (Count + 1))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == (Count +1))
	{
		InsertLast(no);
	}
	else
	{
		struct node<T> *newn = NULL;
		struct node<T> *temp = NULL;
		newn = new node<T>;
		
		newn -> data = no;
		newn -> next = NULL;
		
		temp = Head;
		for(int iCnt = 1;iCnt < (iPos - 1);iCnt++)
		{
			temp = temp -> next;
		}
		
		newn -> next = temp -> next;
		temp -> next = newn;
	
		Count++;
	}
	
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node<T> *tempDelete = NULL;
	
	if(Head == NULL)
	{
		return;
	}
	else
	{
		tempDelete = Head;
		Head = Head -> next;
		delete tempDelete;
	}
	
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T> *tempDelete = NULL;
	struct node<T> *temp = NULL;
	
	if(Head == NULL)
	{
		return;
	}
	else
	{
		temp = Head;
		
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		
		delete (temp -> next);
		temp -> next = NULL;
	}
	
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
	if(iPos < 0 || iPos > Count)
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == Count)
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp = NULL;
		struct node<T> *tempDelete = NULL;
				
		temp = Head;
		for(int iCnt = 1;iCnt < (iPos - 1);iCnt++)
		{
			temp = temp -> next;
		}
		
		tempDelete = temp -> next;
		temp -> next = temp -> next -> next;
		delete (tempDelete);
		
		Count--;
	}
	
	
}

template<class T>
void SinglyLL<T>::Display()
{
	struct node<T> *temp = NULL;
	
	temp = Head;
	
	while(temp != NULL)
	{
		cout<<"| "<<temp -> data<<" |->";
		temp = temp -> next;
	}
	cout<<"NULL"<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}









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
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPos(T no, int iPos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int iPos);
		void Display();
		int Countnode();
};

template<class T>
DoublyLL<T>::DoublyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
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
		Head -> prev = newn;
		Head = newn;
	}
	
	Count++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
	struct Dnode<T> *newn = NULL;
	struct Dnode<T> *temp = NULL;
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
		temp = Head;
		
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		
		temp -> next = newn;
		newn -> prev = temp;
	}
	
	Count++;
}

template<class T>
void DoublyLL<T>::InsertAtPos(T no, int iPos)
{
	if(iPos < 0 || iPos > (Count + 1))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == (Count + 1))
	{
		InsertLast(no);
	}
	else
	{
		struct Dnode<T> *newn = NULL;
		struct Dnode<T> *temp = NULL;
		newn = new Dnode<T>;
		
		newn -> data = no;
		newn -> next = NULL;
		newn -> prev = NULL;
		
		temp = Head;
		
		for(int iCnt = 1; iCnt <(iPos - 1); iCnt++)
		{
			temp = temp -> next;
		}
		
		newn -> next = temp -> next;
		newn -> prev = temp;
		temp -> next = newn;
		newn -> next -> prev = newn;
		
		Count++;
	}
	
}


template<class T>
void DoublyLL<T>::DeleteFirst()
{
	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = Head -> next;
		delete (Head -> prev);
		Head -> prev = NULL;
	}
	
	Count--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
	if(Head == NULL)
	{
		return;
	}
	else
	{
		struct Dnode<T> *temp = NULL;
		
		temp = Head;
		
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		
		delete (temp -> next);
		temp -> next = NULL;
	}
	
	Count--;
}

template<class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
	if(iPos < 0 || iPos > Count)
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == Count)
	{
		DeleteLast();
	}
	else
	{
		struct Dnode<T> *temp = NULL;
		
		temp = Head;
		
		for(int iCnt = 1; iCnt < (iPos - 1);iCnt++)
		{
			temp = temp -> next;
		}
		
		temp -> next = temp -> next -> next;
		delete temp -> next -> prev;
		temp -> next -> prev = temp;
		
		Count--;
	}
}

template<class T>
void DoublyLL<T>::Display()
{
	struct Dnode<T> *temp = NULL;
	
	temp = Head;
	cout<<"|NULL|->";
	while(temp != NULL)
	{
		cout<<"| "<<temp -> data<<" |->";
		temp = temp -> next;
	}
	cout<<"NULL"<<endl;
}

template<class T>
int DoublyLL<T>::Countnode()
{
	return Count;
}







template <class T>
struct SCnode
{
	T data;
	struct SCnode<T> *next;
};

template <class T>
class SinglyCircularLL
{
	private :
		struct SCnode<T> *Head;
		struct SCnode<T> *Tail;
		int Count;
		
	public :
		SinglyCircularLL();
		void InsertFirst(T no);
		void InsertLast(T no);
		void InsertAtPos(T no, int iPos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int iPos);
		void Display();
		int Countnode();
};

template<class T>
SinglyCircularLL<T>::SinglyCircularLL()
{
	Head = NULL;
	Tail = NULL;
	Count = 0;
}

template<class T>
void SinglyCircularLL<T>::InsertFirst(T no)
{
	struct SCnode<T> *newn = NULL;
	
	newn = new SCnode<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
		Tail -> next = Head;
	}
	
	Count++;
}

template<class T>
void SinglyCircularLL<T>::InsertLast(T no)
{
	struct SCnode<T> *newn = NULL;
	
	newn = new SCnode<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail -> next = newn;
		newn -> next = Head;
	}
	
	Count++;
}

template<class T>
void SinglyCircularLL<T>::InsertAtPos(T no, int iPos)
{
	if(iPos < 0 || iPos > (Count + 1))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == (Count + 1))
	{
		InsertLast(no);
	}
	else
	{
		struct SCnode<T> *newn = NULL;
		struct SCnode<T> *temp = NULL;
		newn = new SCnode<T>;
		
		newn -> data = no;
		newn -> next = NULL;
		
		temp = Head;
		
		for(int iCnt = 1; iCnt <(iPos - 1); iCnt++)
		{
			temp = temp -> next;
		}
		
		newn -> next = temp -> next;
		temp -> next = newn;
		
		Count++;
	}
	
}

template<class T>
void SinglyCircularLL<T>::DeleteFirst()
{
	if(Head == NULL)
	{
		return;
	}
	else
	{
		Head = Head -> next;
		delete (Tail -> next);
		Tail -> next = Head;
	}
	
	Count--;
}

template<class T>
void SinglyCircularLL<T>::DeleteLast()
{
	if(Head == NULL)
	{
		return;
	}
	else if(Head -> next == NULL)
	{
		delete Head;
		Head = NULL;
	}
	{
		struct SCnode<T> *temp = NULL;
		
		temp = Head;
		
		do
		{
			temp = temp -> next;
		}
		while(temp -> next != Tail);
		
		delete (temp -> next);
		temp -> next = Head;
		Tail = temp;
	}
	
	Count--;
}

template<class T>
void SinglyCircularLL<T>::DeleteAtPos(int iPos)
{
	if(iPos < 0 || iPos > Count)
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == Count)
	{
		DeleteLast();
	}
	else
	{
		struct SCnode<T> *temp = NULL;
		struct SCnode<T> *tempDelete = NULL;
		
		temp = Head;
		
		for(int iCnt = 1; iCnt < (iPos - 1);iCnt++)
		{
			temp = temp -> next;
		}
		
		tempDelete = temp -> next;
		temp -> next = temp -> next -> next;
		delete(tempDelete);
		
		
		Count--;
	}
}

template<class T>
void SinglyCircularLL<T>::Display()
{
	struct SCnode<T> *temp = NULL;
	
	temp = Head;

	cout<<"|Tail";
	do
	{
		cout<<"| "<<temp -> data<<" |->";
		temp = temp -> next;
	}
	while(temp != Head);
	cout<<"|HEAD|"<<endl;
}

template<class T>
int SinglyCircularLL<T>::Countnode()
{
	return Count;
}

int main()
{
	SinglyCircularLL <int>obj;

	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(51);
	obj.InsertAtPos(1,1);
	obj.InsertAtPos(101,5);
	obj.InsertAtPos(75,4);
	obj.InsertAtPos(85,5);
	
	obj.Display();
	int iRet = obj.Countnode();
	
	cout<<"no of Nodes are : "<<iRet<<endl;
	
	//obj.DeleteFirst();
	obj.DeleteLast();
	
	//obj.DeleteAtPos(1);  // 11
	//obj.DeleteAtPos(4);  // 101
	//obj.DeleteAtPos(2);  // 51
	
	obj.Display();
	iRet = obj.Countnode();
	
	cout<<"no of Nodes are : "<<iRet<<endl;
	//cout<<"no of Nodes are : "<<iRet<<endl;
	return 0;
}