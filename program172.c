#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	
	char Fname[20];
	char Data[100];
	int fd = 0, iRet = 0;   //file descriptor
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	printf("File is Succesfully open with fd %d\n",fd);
	
	iRet = read(fd,Data,10);
	
	printf("%d bytes successfully read in file \n",iRet);
	
	printf("Data from file is \n");
	write(1,Data,iRet);
	
	return 0;
}

// 0  STDIN  keybord
// 1  STDOUT Monitor
// 2  STDRR  Monitor