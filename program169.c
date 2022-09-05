#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//O_RDONLY  read
//O_WRONLY  write
//O_RDWR    read + write

int main()
{
	
	char Fname[20];
	int fd = 0, iRet = 0;   //file descriptor
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	printf("File is Succesfully open with fd %d\n",fd);
	
	return 0;
}