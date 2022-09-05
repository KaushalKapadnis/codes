#include"Header.h"


///////////////////////////////////////////////////////
//write a program to perform addition of numbers
///////////////////////////////////////////////////////

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iNo3 = 0;
	
	printf("Enter first no :");
	scanf("%d",&iNo1);
	
	printf("Enter second no :");
	scanf("%d",&iNo2);
	
	iNo3 = Addition(iNo1,iNo2);
	printf("Addition is :%d\n",iNo3);
	
	return 0;
}

//////////////////////////////////////////////////
//
// Input : 11 10
// Output : 21
//
//////////////////////////////////////////////////