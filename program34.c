#include<stdio.h>
#include<stdbool.h>

int CountFactors(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;
	
	
	for(iCnt = 2; iCnt <= iNo/2; iCnt++);
	{
		if((iNo % iCnt) == 0)
		{
			iFactCnt++;
		}
	}
	
	return iFactCnt;
}

bool ChkPrime(int iNo1)
{
	int iRet = 0;
	iRet = CountFactors(iNo1);
	
	if(iRet == 0)
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
	
	printf("Enter Number ");
	scanf("%d",&iValue);
	
	bRet = ChkPrime(iValue);
	
	if(bRet == true)
	{
		printf("%d is prime no \n",iValue);
	}
	else
	{
		printf("%d is not a prime no\n",iValue);
	}
	
	return 0;
}