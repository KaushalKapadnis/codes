//Input : 4
//Output :
/*
	$ 2 3 4
	1 $ 3 4
	1 2 $ 4
	1 2 3 $
*/ 
//Complexity : 

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	if(iRow != iCol)
	{
		return;
	}
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1;j <= iCol; j++)
		{
			if(i == j)
			{
				printf("$\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");		
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter Number of Rows : ");
	scanf("%d",&iValue1);
	
	printf("Enter Number of Coloumns :");
	scanf("%d",&iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}