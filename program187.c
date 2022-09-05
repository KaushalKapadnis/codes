#include<stdio.h>

int Sum(int Arr[], int iSize)
{
	static int iSum = 0;
	
	if(iSize > 0)
	{
		iSum = iSum + Arr[iSize -1];
		iSize--;
		SumR(Arr,iSize);
	}
	return iSum;
}
/*
int Sum(int Arr[], int iSize)
{
	static int i = 0;
	static int iSum = 0;
	
	if(iSize < 0)
	{
		iSum = iSum + Arr[1];
		i++;
		SumR(Arr,iSize);
	}
	return iSum;
}
*/

int main()
{
	int Brr[] = {10,20,30,40};
	int iRet = 0;
	
	iRet = Sum(Brr,4);
	
	printf("Summation of Elements is : %d\n",iRet);
	
	return 0;
}