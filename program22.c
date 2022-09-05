#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 0;
	int iTemp = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iTemp = iTemp + iCnt;
	}
	
	return iTemp;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :");
	scanf("%d",&iValue);
	
	iRet = Summation(iValue);
	
	printf("Summation is : %d",iRet);
	
	return 0;
}



