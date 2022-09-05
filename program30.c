#include<stdio.h>

///////////////////////////////////////////////////////////////////////
//
//  Function Name : SumFactors
//  Input : Integer
//  Output: Integer
//  Description : perform addition of factors of Input Integer
//  Author : Kaushal Sachin Kapadnis
//  
///////////////////////////////////////////////////////////////////////


int SumFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	
	return iSum;
}

///////////////////////////////////////////////////////////////////////
//accept no from user and return addition of factors of that no
///////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = SumFactors(iValue);
	
	printf("Addition of factors is : %d",iRet);
	
	return 0;
}

//Time Compexity : O(N/2)