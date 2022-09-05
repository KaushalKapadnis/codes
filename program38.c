#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//	Name : DisplayDigits
//	Input : Integer
//	Output : void
//	Description : Display Digits of Input Elements  
//	Author : Kaushal Sachin Kapadnis
//  Date : 	20/4/2022
//
////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iDigit = 0;
	
	while(iNo > 0)
	{		
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo = iNo / 10; 
	}
}

////////////////////////////////////////////////////////////////////////////////
//	Entry Point Function
////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
	
	return 0;
}