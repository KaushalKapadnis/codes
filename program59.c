#include"Header59.h"

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	auto ULONG lRet = 0;
	
	printf("Enter First no : ");
	scanf("%d",&iValue1);
	
	printf("Enter Second Number : ");
	scanf("%d",&iValue2);
	
	lRet = Power(iValue1, iValue2);
	
	printf("result is:%ld",lRet);
	
	return 0;
}

