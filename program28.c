#include<stdio.h>

//////////////////////////////////////////////////////////////////////
// 
// Function Name :  Kaushal Sachin Kapadnis
// Input :  Integer
// Description :  accepts no and display its factors
// Author : Kaushal Sachin Kapadnis
//
//////////////////////////////////////////////////////////////////////


void DisplayFactors(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= ( iNo/2 ); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
	
	
}

//////////////////////////////////////////////////////////////////////
// Accept number from user and display its factors
//////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}

// Time Complexity : O(N/2)  