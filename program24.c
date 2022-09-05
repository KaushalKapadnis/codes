#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//	Name : Check
//	Input : Integer
//	Output : Boolean
//	Description : Checks Divisibility by 3 and 5
//	Author : Kaushal Sachin Kapadnis
//  Date : 	20/4/2022
//
////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
	if(
	    ((iNo % 3) == 0) && 
		((iNo % 5) == 0)
	)
		
	{
		return true;
	}
	else 
	{
		return false;
	}
}

///////////////////////////////////////////////////////////////////////////////////
//	Entry Point function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	bool bRet = 0;
	
	printf("Enter Number :");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == true)
	{
		printf("%d is dividible by 3 & 5\n",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 & 5\n",iValue);
	}
	
	return 0;
}