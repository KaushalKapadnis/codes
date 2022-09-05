#include<stdio.h>

void Display(int iNo)
{
	//static int i = 0;
	//int i = iNo;
	static char ch = 'A';

	if(iNo > 0)
	{
		printf("%c\t",ch);//'a'+ i);
		//i++;
		//i--;
		ch++;
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}