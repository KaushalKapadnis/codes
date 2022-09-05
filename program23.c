#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//	Name : ChkEven
//	Input : Integer
//	Output : Boolean
//	Description : Checks whether input Integer is Even or Odd
//	Author : Kaushal Sachin Kapadnis
//  Date : 	20/4/2022
//
////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////
//
//	Entry point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	
	if(bRet == true)
	{
		printf("%d is Even number\n",iValue);
	}
	else
	{
		printf("%d is odd number \n",iValue);
	}
	
	return 0;
}