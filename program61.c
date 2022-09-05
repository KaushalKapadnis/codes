#include<stdio.h>
#include<stdbool.h>

bool ChkAmstrong(int iNo )
{
	int iTemp = 0,iCnt = 0;  
	int iDigit = 0,iDigCnt = 0,iSum = 0,iMult = 0;
	
	if(iNo< 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	while(iNo > 0)
	{
		iDigCnt++;
		iNo = iNo / 10;
	}
	
	iNo = iTemp;
	
	while(iNo > 0)
	{
		iMult = 1;
		
		iDigit = iNo % 10;
		
		for(iCnt = 1; iCnt <= iDigCnt;iCnt++)
		{
			iMult = iMult * iDigit;
		}
		
		iSum = iSum + iMult;
		
		iNo = iNo / 10;
	}
	
	if(iSum == iTemp)
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
		printf(" %d is amstrong Number ",iValue);
	}
	else
	{
		printf("%d is not amstrong Number ",iValue);
	}
	
	return 0;
}