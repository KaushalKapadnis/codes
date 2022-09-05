#include<stdio.h>
#include<stdlib.h>

int Max(int *Arr, int iLength)
{
	int iCnt = 0;
	int iMax = Arr[0];
	
	for(iCnt = 1; iCnt < iLength; iCnt++)
	{	
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}

	return iMax;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0; 
	int *ptr = NULL;
	
	printf("Enter Size :");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int) * iSize);
	
	printf("Enter Value of array : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet =Max(ptr, iSize);
	
	printf("maximum no is %d\n",iRet);
	
	free(ptr);
	
	return 0;
}