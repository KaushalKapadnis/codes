#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int *Arr, int iLength)
{
	
	int iCnt = 0;
	
	printf("Even Numbers are : \n");
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{	
		if((*Arr % 2) == 0)
		{
			printf("%d\n",*Arr);
		}
		Arr++;
	}

}

int main()
{
	int iSize = 0;
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
	
	DisplayEven(ptr, iSize);
	
	free(ptr);
	
	return 0;
}