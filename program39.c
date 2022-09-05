#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//	Name : CountDigits
//	Input : Integer
//	Output : Integer
//	Description : Returns Counts Digits of Input Integer   
//	Author : Kaushal Sachin Kapadnis
//  Date : 	27/4/2022
//
////////////////////////////////////////////////////////////////////////////////


int CountDigits(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigitCnt = 0;
	
	while(iNo != 0)
	{		
		iDigitCnt++;
		iNo = iNo / 10; 
	}
	
	return iDigitCnt;
}

////////////////////////////////////////////////////////////////////////////////
//	Entry Point Function
////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = CountDigits(iValue);
	
	printf("No of Digits are : %d",iRet);
	
	return 0;
}