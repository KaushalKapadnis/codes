#include<stdio.h>

int FactorialI(int iNo)
{
	int iFact = 1;
	
	while(iNo > 0)
	{
		iFact = iFact * iNo;
		iNo--;
	}
	
	return iFact;
}

int main()
{
	int iValue = 5;
	static iValue2 = 5;
	
	int iRet = 0;
	
	printf("Enter thr Number");
	scanf("%d",&iValue);
	
	iRet = FactorialI(iValue);
	
	printf("Factorial is : %d\n",iRet);
	
	return 0;
}