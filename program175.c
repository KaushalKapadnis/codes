#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int  FileLength(char Fname[])
{
	char Data[10];
	int fd = 0,iRet = 0, iSum = 0;   //file descriptor

	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1 ;
	}

	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		iSum = iSum + iRet;
	}

	close(fd);
	return iSum;
}

int main()
{
	char Fname[20];
	int iRet = 0;

	printf("Enter file name to open\n");
	scanf("%s",Fname);

	iRet = FileLength(Fname);

	printf("Length of file is : %d",iRet);
}