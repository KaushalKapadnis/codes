#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iCopy = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iCopy = iNo;
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		iRev = (iRev * 10) + iDigit;
		
		iNo = iNo / 10;
	}
	
	if(iCopy == iRev)
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
	
	bRet = ChkPalindrome(iValue);
	
	if(bRet == true)
	{
		printf("%d is palindrome \n",iValue);
	}
	else
	{
		printf("%d is not a palindrome",iValue);
	}
	
	return 0;
}