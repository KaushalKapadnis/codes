#include<stdio.h>
#include<stdbool.h>

bool ChkAmstrong(int iNo)
{
	int iDigit = 0;
	int iCopy = 0;
	int iCnt = 0;
	int iCount = 0;
	int lMult = 1;
	int iSum = 0;
	int iCopy1 = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iCopy = iNo;
	iCopy1 = iNo;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iCount++;
		iNo = iNo / 10;
	}
	
	while(iNo > 0)
	{
		iDigit = iCopy % 10;
		
		for(iCnt = 1;iCnt <= iCount; iCnt++)
		{
			lMult = lMult * iDigit;
			iSum = iSum + lMult;
		}
		
	}
	
	if(iSum == iCopy1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	bRet = ChkAmstrong(iValue);
	
	if(bRet == true)
	{
		printf("%d is amstrong number ",iValue);
	}
	else
	{
	printf("%d is not amstrong number ",iValue);
	}
	
	return 0;
}