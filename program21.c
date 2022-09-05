#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iCnt = 1;
	while(iCnt <= iNo)
	{
		printf("%d\t",iCnt);
		iCnt++;
	}
}

int main()
{
	int iValue;
	
	printf("Enter the number :");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}



