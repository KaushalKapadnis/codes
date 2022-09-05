#include<stdio.h>

//123
//3 2 1

void DisplayI(int iNo)
{
	
	while(iNo != 0)
	{
		printf("%d\t",(iNo % 10));
		iNo = iNo / 10;
		
	}
	printf("\n");
}

void DisplayR(int iNo)
{	
	if(iNo != 0)
	{
		printf("%d\t",(iNo % 10));
		iNo = iNo / 10;
		DisplayR(iNo);
	}
}

int main()
{
	DisplayI(123);
	DisplayR(123);
	
	return 0;
}