#include<stdio.h>

int CountSmall(char *Str)
{
	static int iCount = 0;
	
	if(*Str != '\0')
	{
		if((*Str >= 'a') && (*Str <= 'z'))
		{
			iCount++;
		}
		Str++;
		CountSmall(Str);
	}

	return iCount;
}

int main()
{
	char arr[20];	
	int iRet = 0;
	
	printf("Enter String : ");
	scanf(" %[^'\n']s",arr);
	
	iRet = CountSmall(arr);
	
	printf("Count of Small letters is : %d\n",iRet);
	
	return 0;
}