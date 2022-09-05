#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr, int iLength)
{
	register int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		printf("%d \t",*Arr);
		*Arr++;
	}
}

int main()
{
	int iValue = 0;
	register int iCnt = 0;
	int *Arr = NULL;

	printf("Enter how many ekements you want : \n");
	scanf("%d",&iValue);
		
	Arr = (int*)malloc(sizeof(sizeof(int) * iValue));
	
	for(iCnt = 0; iCnt < iValue; iCnt++)
	{
		printf("Enter Number : ");
		scanf("%d",&Arr[iCnt]);
	}
		
	Display(Arr,iValue);
	
	free(Arr);
	
	return 0;
}