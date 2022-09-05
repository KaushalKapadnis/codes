//ccepet no from user and Display that no of times on screen

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 0;iCnt < iNo; iCnt++)
	{
		printf("Hello\n");
	}
}
int main()
{
	int iNo = 0;
	
	printf("Enter the no : \n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}

