#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int *Arr, int iLength, int iSearch)
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
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int iSize = 0, iCnt = 0, iSearch = 0; 
	bool bRet = false;
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
	
	bRet = Search(ptr, iSize, iSearch);
	
	if(bRet == true)
	{
		printf("Number is present");
	}
	else
	{
		printf("Number is not present");
	}
	
	free(ptr);
	
	return 0;
}