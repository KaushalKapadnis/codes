#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
	int iSum = 0,iCnt = 0;
	
	for(iCnt = 0;iCnt < iSize;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	
	return iSum;
}

int main()
{
	int iSize = 0,iCnt = 0,iRet = 0;
	int *ptr = NULL;
	
	printf("Enter size of array : \n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter Numbers : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Summation(ptr , iSize);
	
	printf("Summation is : %d",iRet);
	
	free(ptr);
	
	return 0;
}