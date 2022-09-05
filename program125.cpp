#include<iostream>

using namespace std;

struct node 
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private :
		PNODE head, tail;
		
	public :
		SinglyCLL();
		//~SinglyCLL(PNODE,PNODE)
		void InsertFirst(int no);
		void InsertLast(int no);
		void InsertAtPos(int no, int ipos);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtAtPos(int iPos);
		void Display();
		int Count();
};

SinglyCLL::SinglyCLL()
{
	head = NULL;
	tail = NULL;
}

/*SinglyCLL::~SinglyCLL(PNODE,PNODE)
{
	
}*/

void SinglyCLL::InsertFirst(int no)
{
	PNODE newn = NULL;
					
	newn = new NODE;  
					
	newn -> data = no;
	newn -> next = NULL;
					
	if(head == NULL && tail == NULL)
	{
		head = newn;
		tail = newn;
	}
	else
	{
		newn -> next = head;
		head = newn;
	}
	tail -> next = head;
}

void SinglyCLL::InsertLast(int no)
{
	PNODE newn = NULL;
	
	newn = new NODE;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(head == NULL && tail == NULL)	
	{
		head = newn;
		tail = newn;
	}
	else
	{
		tail -> next = newn; 	
		tail = newn;
	}
	newn -> next = head;
}

void SinglyCLL::InsertAtPos(int no, int iPos)
{	
	int iSize = Count();
	
	if((iPos < 0) || (iPos > (iSize+1)))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == (iSize + 1))
	{
		InsertLast(no);
	}
	else
	{
		PNODE temp = NULL, newn = NULL;
		int iCnt = 0;
	
		temp = head;
		
		newn = new NODE;
	
		newn -> data = no;
		newn -> next = NULL;
		
		for(iCnt = 1; iCnt < iPos - 1; iCnt++)
		{
			temp = temp -> next;
		}
		
		newn -> next = temp -> next;
		temp -> next = newn;
	}
	
}

void SinglyCLL::DeleteFirst()
{	
	if(head == NULL && tail == NULL)
	{
		return;
	}
	else if(head == tail)
	{
		delete head;      //delete tail
		head = NULL;
		tail = NULL;
	}
	else
	{
		head = head -> next;
		delete tail -> next;
		tail -> next = head;
	}
}

void SinglyCLL::DeleteLast()
{
	PNODE temp = head;
	
	if(head == NULL && tail == NULL)
	{
		return;
	}
	else if(head == tail)
	{
		delete head;   //delete tail
		head = NULL;
		tail = NULL;
	}
	else
	{
		while(temp -> next != tail)
		{
			temp = temp -> next;
		}
		
		delete tail;
		tail = temp;
		temp -> next = head;
	}
}

void SinglyCLL::DeleteAtAtPos(int iPos)
{	
	int iSize = Count();
	
	if((iPos < 0) || (iPos > iSize))
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == iSize)
	{
		DeleteFirst();
	}
	else
	{
		PNODE temp1 = head,temp2 = NULL;
		int iCnt = 0;
		
		for(iCnt = 1; iCnt < iPos - 1; iCnt++)
		{
			temp1 = temp1 -> next;
		}
		
		temp2 = temp1 -> next;
		temp1 -> next = temp1 -> next -> next;
		delete temp2;
	}
}

void SinglyCLL::Display()
{
	PNODE temp = NULL;
			
	temp = head;
	
	if(head == NULL && tail == NULL)
	{
		return;
	}		
	
	do
	{
		cout<<"| "<<temp -> data<<" |->";
		temp = temp -> next;
	}while(temp != head);
		
	cout<<"NULL"<<endl;
}

int SinglyCLL::Count()
{
	PNODE temp = NULL;
	int iCnt = 0;
			
	temp = head;
	
	if(head == NULL && tail == NULL)
	{
		return 1;
	}	
	
	do
	{
		iCnt++;
		temp = temp -> next;
	}while(temp != head);
	
	return iCnt;
}

int main()
{
	int iRet = 0;
	
	SinglyCLL obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);
	
	//obj.DeleteFirst();
	//obj.DeleteLast();
	
	obj.InsertAtPos(105,3);
	obj.DeleteAtAtPos(4);
	
	obj.Display();
	iRet = obj.Count();
	
	cout<<"No of elements in list are : "<<iRet<<endl;
	
	SinglyCLL obj1;
	
	obj1.InsertFirst(11);
	obj1.InsertAtPos(21,2);
	
	obj1.Display();
	iRet = obj1.Count();
	
	cout<<"No of elements in list are : "<<iRet<<endl;
	
	return 0;
}