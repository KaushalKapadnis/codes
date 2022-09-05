#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : DisplayNonFactors
//  Input : Integer
//  Description : Displays non factors of input Integer
//  Author : Kaushal Sachin Kapadnis
//
///////////////////////////////////////////////////////////////////////////////


void DisplayNonFactors(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//Accept no from user and display its non factors
///////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter Number \n");
	scanf("%d",&iValue);
	
	DisplayNonFactors(iValue);
	
	return 0;
}

//Time Complexity : O(N)