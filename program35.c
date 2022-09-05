#include<stdio.h>
#include<stdbool.h>


////////////////////////////////////////////////////////////////////////////////
//
//	Name : ChkPrime
//	Input : Integer
//	Output : Boolean
//	Description : Checks Whether Input Integer is Prime or not
//	Author : Kaushal Sachin Kapadnis
//  Date : 	26/4/2022
//
////////////////////////////////////////////////////////////////////////////////


bool ChkPrime(int iNo)
{
	int iCnt = 0;
	bool bFlag = true;
	
	for(iCnt = 2; iCnt <=  (iNo / 2);iCnt++);
	{
		if(iNo % iCnt == 0)
		{
			bFlag = false;
			break;
		}
	}
	
	return bFlag;
}

//////////////////////////////////////////////////////////////////////////////////
//	Entry Pint Function
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter Number ");
	scanf("%d",&iValue);
	
	bRet = ChkPrime(iValue);
	
	if(bRet == true)
	{
		printf("%d is prime no ",iValue);
	}
	else
	{
		printf("%d is not prime no ",iValue);
	}
	
	return 0;
}