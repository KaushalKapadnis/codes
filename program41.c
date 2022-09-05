#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//	Name : DisplayEvenDigits
//	Input : Integer
//	Desciption :Displays Even Digits of Input Integer
//	Author : Kaushal Sachin Kapadnis
//	Date : 28/6/2022
//
///////////////////////////////////////////////////////////////////////////////////

void DisplayEvenDigits(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{		
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			printf("%d\n",iDigit);
		}
		iNo = iNo / 10;
		
	}
}

///////////////////////////////////////////////////////////////////////////////////
//	Entry point Function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);

	DisplayEvenDigits(iValue);

	return 0;
}