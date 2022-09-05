#include<stdio.h>


////////////////////////////////////////////////////////////////////////////////
//
//	Name : JwelersPortal
//	Input : Integer
//	Output : void
//	Description : Based on Input weight Display the money needed to pay for gold 
//	Author : Kaushal Sachin Kapadnis
//  Date : 	20/4/2022
//
////////////////////////////////////////////////////////////////////////////////


void JwelersPortal(int iweight)
{
	switch(iWeight)
	{
		case 1:
			printf("you need to pay 4000\n");
			break;
			
		case 2:
			printf("you need to pay 8000\n");
			break;
		
		case 5:
			printf("you need to pay 20000\n");
			break;
			
		case 10:
			printf("you need to pay 40000\n");
			break;
			
		default:
			printf("Invalid Weight \n");
			break;
	}
	
}

///////////////////////////////////////////////////////////////////////////////////
//	Entry point Function
///////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue = 0;
	
	printf("Enter the gold coin size you want to purchase \n ");
	scanf("%d",&iValue);
	
	JwelersPortal(iValue);
	
	return 0;
}