//Input : 4
//Output :
/*
	* * * *
	* * $ *
	* @ * *
	* * * *
*/ 
//Complexity : 

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	if(iRow != iCol)
	{
		printf("Invalid Input\n");
		return;
	}
	
	for(i = 1; i <= iRow; i++)
	{
		printf("\n");
		for(j = 1;j <= iCol; j++)
		{
			if((i == 1 || j == 1 || i == iRow || j == iCol || i == j ))
			{
				printf("*\t");
			}
			else 
			{
				if(i < j)
				{
					printf("$\t");
				}
				else if( i > j)
				{
					printf("&\t");
				}
			}
			
		}
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