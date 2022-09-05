#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
	int lMult = 1;
	register int iCnt = 0;
	
	for(iCnt = 1;iCnt <=iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}
	
	return lMult;
}

bool ChkAmstrong(int iNo )
{
	int iTemp = 0; 
	int iDigit = 0,iDigCnt = 0,iSum = 0;
	
	if(iNo< 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	//Calulate number of digits
	while(iNo > 0)
	{
		iDigCnt++;
		iNo = iNo / 10;
	}
	
	iNo = iTemp;
	
	while(iNo > 0)
	{
		int iCnt = 0;
		iDigit = iNo % 10;
		iSum = iSum + Power(iDigit,iDigCnt);
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