#include<stdio.h>
#include<stdlib.h>

int DisplayEven(int *Arr, int iLength)
{
	int DigCnt = 0;
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{	
		if((*Arr % 2) == 0)
		{
			DigCnt++;
		}
		Arr++;
	}

	return DigCnt;
}

int main()
{
	int iSize = 0;
	int iRet = 0;
	int *ptr = NULL;
	register int iCnt = 0;
	
	printf("Enter Size :");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int) * iSize);
	
	printf("Enter Value of array : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = DisplayEven(ptr, iSize);
	
	printf("No of Even Elements are : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}