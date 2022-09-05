#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int  CountSmall(char Fname[])
{
	char Data[10];
	int fd = 0,iRet = 0,iCnt = 0,iCount = 0;   //file descriptor

	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1 ;
	}

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(iCnt = 0; iCnt < iRet; iCnt++)
		{
			if((Data[iCnt] >= 'a') && (Data[iCnt] <= 'z'))
			{
				iCount++;
			}
		}
	}
	
	close(fd);
	return iCount;
}

int main()
{
	char Fname[20];
	int iRet = 0;

	printf("Enter file name to open\n");
	scanf("%s",Fname);

	iRet = CountSmall(Fname);

	printf("Count of small case letters in file is : %d",iRet);
}