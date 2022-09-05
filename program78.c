#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurance(int *Arr, int iLength, int iSearch)
{
	int iCnt = 0;
	int iIndex = -1;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iSearch)
		{
			iIndex = iCnt;
			break;
		}
	}
	
	return iIndex;
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
	
	iRet = SearchFirstOccurance(ptr, iSize, iSearch);

	printf("%d is at index %d",iSearch,iRet);
	
	
	free(ptr);
	
	return 0;
}