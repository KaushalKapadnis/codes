#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
	int iCnt = 0; int iMin = Arr[0];
	
	for(iCnt = 1; iCnt < iLength; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	
	return iMin;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;
	
	printf("Enter Size : \n");
	scanf("%d",&iSize);
	
	ptr = (int*)malloc(sizeof(int) * iSize);
	
	printf("Enter Number : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Minimum(ptr,iSize);
	printf("Minimum number is : %d",iRet);
	free(ptr);
	
	return 0;
}
