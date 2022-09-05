#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn -> next = *head;
		*head = newn;
	}
	
}

void InsertLast(PPNODE head,int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		
		temp -> next = newn;
	}
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = (*head) -> next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp = NULL;
	
	if((*head) == NULL)
	{
		return;
	}
	else if((*head) -> next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp = *head;
		
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp -> next);
		temp -> next = NULL;
		
	}
	
}

void Display(PNODE head)
{
	while(head != NULL)
	{
		printf("|%d|->",head -> data);
		head = head -> next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt = 0;
	while(head != NULL)
	{
		iCnt++;
		head = head -> next;
	}
	return iCnt;
}

void InsertAtPos(PPNODE head, int pos, int no)
{
	int size = 0, iCnt = 0;
	
	PNODE temp = NULL;
	PNODE newn = NULL;
	
	size = Count(*head);
	
	if((pos < 1) || (pos > (size + 1)))
	{
		printf("INVALID INPUT\n");
		return;
	}
	
	if(pos == 1)
	{
		InsertFirst(head,no);
	}
	else if(pos == (size + 1))
	{
		InsertLast(head,no);
	}
	else
	{
		temp = *head;
		
		newn = (PNODE)malloc(sizeof(NODE));
	
		newn -> data = no;
		newn -> next = NULL;
	
		for(iCnt = 0; iCnt < (pos - 1); iCnt++)
		{
			temp = temp -> next;
		}
		
		newn -> next = temp -> next;
		temp -> next = newn;
	}
	
}

void DeleteAtPos(PPNODE head, int pos)
{
	int size = 0, iCnt = 0;
	
	PNODE temp = NULL;
	PNODE tempdelete = NULL;
	
	size = Count(*head);
	
	if(pos < 1 || pos > size)
	{
		printf("INVALID INPUT\n");
		return;
	}
	
	if(pos == 1)
	{
		DeleteFirst(head);
	}
	else if(pos == size)
	{
		DeleteLast(head);
	}
	else
	{
		temp = *head;
		
		for(iCnt = 0; iCnt < pos -2; iCnt++)
		{
			temp = temp -> next;
		}
		
		temp = tempdelete;
		temp -> next = temp -> next -> next;
		free(tempdelete -> next);
	}
	
}

int main()
{
	PNODE first = NULL;
	
	InsertFirst(&first,101);	
	InsertFirst(&first,51);	
	InsertFirst(&first,21);	
	InsertFirst(&first,11);
	
	Display(first);
	
	InsertLast(&first,121);
	
	Display(first);
	
	DeleteFirst(&first);
	
	DeleteFirsfirst);
	
	Display(first);
	
	InsertAtPos(&first,3,75);
	
	Display(first);
	
	DeleteAtPos(&first,3);
	
	Display(first);
	
	return 0;
}
