//Input : 4 4
//Output :
/*
	a 
	a b 
	a b c 
	a b c d
*/ 
//Complexity : O(N2)

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	if(iRow != iCol)
	{
		printf("Invalid Input\n");
		return;
	}
	for(i = iRow; i >= 2;i--)
	{
		for(j = 1;j <= i; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1;j <= i; j++)
		{  
			printf("*\t");
		}
		printf("\n");
	}

}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number of Rows : ");
	scanf("%d",&iValue1);
	
	printf("Enter Number of Coloumns :");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}