#include<stdio.h>
#include<stdlib.h>

int ChkOccurance(int *Arr, int iLength, int iSearch)
{
	int iCnt = 0, iFreq = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iSearch)
		{
			iFreq++;
		}
	}
	
	return iFreq;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0, iSearch = 0; 
	int *ptr = NULL;
	
	printf("Enter Size :");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int) * iSize) ;
	
	printf("Enter Value of array : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter Number to Seached :");
	scanf("%d",&iSearch);
	
	iRet =ChkOccurance(ptr, iSize, iSearch);
	
	printf("Frequency of no is %d\n",iRet);
	
	free(ptr);
	
	return 0;
}