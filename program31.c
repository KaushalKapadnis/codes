#include<stdio.h>
#include<stdbool.h>

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

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkPerfect
//  Input : Integer
//  Output : Boolean
//  Description : returns true if input is perfect number
//  Author : Kaushal Sachin Kapadins
//
///////////////////////////////////////////////////////////////////////////////////////////

bool ChkPerfect(int iNo)
{
	int iAns = 0;
	iAns =  SumFactors(iNo);
	if(iAns == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

///////////////////////////////////////////////////////////////////////////////////////////
//  Accept number from user and check wether it is perfect or not
///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter Number \n");
	scanf("%d",&iValue);
	
	bRet = ChkPerfect(iValue);
	
	if(bRet == true )
	{
		printf("%d is perfect Number\n",iValue);
	}
	else
	{
		printf("%d is not perfect Number\n",iValue);
	}
	
	return 0;
}