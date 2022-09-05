#include<stdio.h>
#include<stdbool.h>

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
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
	{
		if(((iNo % iCnt) == 0) && (iSum <= iNo))
		{
			iSum = iSum + iCnt;
		}

		/*if(iSum > iNo)
		{
			break;
		}*/
	}
	
	if(iSum == iNo)
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
	
	if(bRet == true)
	{
		printf("%d is perfect number\n",iValue);
	}
	else
	{
		printf("%d is not perfect number\n",iValue);
	}
	return 0;
}