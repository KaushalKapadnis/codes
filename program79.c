#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Search(int *Arr, int iLength, int iSearch)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt]) == iSearch)
		{
			break;
		}
	}
	
	if(iLength == iCnt)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iSize = 0, iCnt = 0, iSearch = 0; 
	int iRet = false;
	int *ptr = NULL;
	
	printf("Enter Size :");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int) * iSize) ;
	
	printf("Enter Value of array : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter Number to Searched :");
	scanf("%d",&iSearch);
	
	iRet = Search(ptr, iSize, iSearch);
	
	if(iRet == -1)
	{
		printf("there is no such element in array");
	}
	else
	{
		printf("first occurance of element is at index : %d",iRet);
	}
	
	free(ptr);
	
	return 0;
}