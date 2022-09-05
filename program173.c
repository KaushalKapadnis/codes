#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	
	char Fname[20];
	char Data[10];
	int fd = 0, iRet = 0;   //file descriptor
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	printf("File is Succesfully open with fd %d\n",fd);

	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		write(1,Data,iRet);
	}
	
	close(fd);
}
