#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int *Arr, int iLength, int iSearch)
{
	int iCnt = 0;
	bool bFlag = false;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{	
		if(Arr[iCnt] == iSearch)
		{
			bFlag = true;
			break;
		}
		else if((Arr[(iLength -1) - iCnt]) == iSearch)
		{
			bFlag = true;
			break;
		}
		if(iCnt >= (iLength - iCnt))
		{
			break;
		}
	}
	
	return bFlag;
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