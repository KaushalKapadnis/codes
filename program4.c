#include<stdio.h>
//////////////////////////////////////////////////
// Function Name : Additon
// Descriptor : Used to perform additon of 2 numbers
// input : Integer, Integer
// Output : Integer
// Date : 12/04/2022
// Author : Kaushal Sachin Kapadnis
//
//////////////////////////////////////////////////
int Addition(int iValue1, int iValue2)
{
	int iAns = 0;
	iAns =iValue1 + iValue2;
	return iAns;
}

//////////////////////////////////////////////////
//write a program to perform addition of numbers
//////////////////////////////////////////////////
int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iNo3 = 0;
	
	printf("Enter first no :");
	scanf("%d",&iNo1);
	
	printf("Enter second no :");
	scanf("%d",&iNo2);
	
	iNo3 = Addition(iNo1,iNo2);
	printf("Addition is :%d\n",iNo3);
	
	return 0;
}