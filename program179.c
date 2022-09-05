//Maximum Throughput in mimimum hardware movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int  CountWhiteSpaces(char Fname[])
{
	char Data[FILESIZE];  // char Data[1024]; 
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
			if(Data[iCnt] == ' '); 
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

	iRet = CountWhiteSpaces(Fname);

	printf("Count of WhiteSpaces in file is : %d",iRet);
}