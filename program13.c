// Program to  display hello 5 time on screen

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	for(iCnt = 1;iCnt <= iNo; iCnt++)
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

