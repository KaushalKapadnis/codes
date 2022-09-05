import java.lang.*;
import java.util.*;

class node
{
	public int data;
	public node next;
}

class SinglyLL
{
	public node Head;
	public int Count;
	
	public SinglyLL()
	{
		Head = null;
		Count = 0;
	}
	
	public void InsertFirst(int no)
	{
		node newn = null;
		
		newn = new node();
		
		newn.data = no;
		newn.next = null;
	
		newn.next = Head;
		Head = newn;
		
		Count++;
	}
	
	public void InsertLast(int no)
	{
		node newn = null;
		
		newn = new node();
		
		newn.data = no;
		newn.next = null;
		
		if(Head == null)
		{
			Head = newn;
		}
		else
		{
			node temp = Head;
			
			while(temp.next != null)
			{
				temp = temp.next;
			}
			
			temp.next = newn;
		}
		
		Count++;
	}
	
	public void InsertAtPos(int no, int iPos)
	{
		if(iPos < 0 || iPos >(Count + 1))
		{
			System.out.println("Invalid position");
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
			node newn = new node();
			node temp = Head;
			
			newn.data = no;
			newn.next = null;
			
			for(int iCnt = 1;iCnt <(iPos - 1); iCnt++)
			{
				temp = temp.next;
			}
			
			newn.next = temp.next;
			temp.next = newn;
			
			Count++;
		}
	}
	
	public void DeleteFirst()
	{
		if(Count == 0)
		{
			return;
		}
		else if(Count == 1)
		{
			Head = null;
		}
		
		else
		{
			node temp = null;
			temp = Head;
			
			Head = Head.next;
			temp = null;
		}
		
		Count--;
	}
	
	public void DeleteLast()
	{
		if(Count == 0)
		{
			return;
		}
		else if(Count == 1)
		{
			Head = null;
		}
		
		else
		{
			node temp = null;
			temp = Head;
			
			while(temp.next.next != null)
			{
				temp = temp.next;
			}
			
			temp.next = null;
		}
		
		Count--;
	}
	
	public void DeleteAtPos(int iPos)
	{
		if(iPos < 0 || iPos > Count)
		{
			System.out.println("Invalid position");
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
			node temp = Head;
						
			for(int iCnt = 1;iCnt <(iPos - 1); iCnt++)
			{
				temp = temp.next;
			}
						
			temp.next = temp.next.next;
			
			Count--;
		}
	}
	
	public void Display()
	{
		node temp = Head;
		
		System.out.println("Elements from Linked list are : ");
		while(temp != null)
		{
			System.out.print("| "+ temp.data +" |->");
			temp = temp.next;
		}
		System.out.println("NULL");
	}
	
	public int CounNode()
	{
		return Count;
	}
}

class program164
{
	public static void main(String arg[])
	{
		SinglyLL obj = new SinglyLL();
		
		obj.InsertFirst(101);
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		
		obj.InsertLast(151);
		
		obj.DeleteFirst();
		
		obj.Display();
		int iRet = obj.CounNode();
		System.out.println("Count : "+iRet);
		
		obj.InsertAtPos(1,1);
		obj.InsertAtPos(201,6 );
		obj.InsertAtPos(75,4);
		
		obj.Display();
		iRet = obj.CounNode();
		System.out.println("Count : "+iRet);
		
		obj.DeleteAtPos(1);
		obj.DeleteAtPos(6);
		obj.DeleteAtPos(3);
		
		obj.Display();
		iRet = obj.CounNode();
		System.out.println("Count : "+iRet);
	}
}