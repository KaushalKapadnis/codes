#include<stdio.h>

int SumDigits(int iNo)
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
			iSum = iSum + iDigit;
		}
		iNo = iNo / 10; 
	}
	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet = SumDigits(iValue);
	
	printf("Summstion of digits is : %d",iRet);
	
	return 0;
}