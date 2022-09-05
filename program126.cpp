#include"Header126.h"

int main()
{
	DoublyCLL obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	//obj.InsertFirst(1);
	
	//obj.InsertLast(101);
	//obj.InsertLast(121);
	//obj.InsertLast(151);
	
	//obj.DeleteLast();
	//obj.DeleteFirst();
	
	//obj.InsertAtPos(1,1);
	//obj.InsertAtPos(151,7);
	//obj.InsertAtPos(75,4);
	
	//obj.DeleteAtPos(1);
	//obj.DeleteAtPos(3);
	obj.DeleteAtPos(2);
	
	obj.Display();
	
	return 0;
}