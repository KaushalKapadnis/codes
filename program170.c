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
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	printf("File is Succesfully open with fd %d\n",fd);

	
	printf("Enter the data in file\n");
	scanf(" %[^'\n']s",Data);
	
	iRet = write(fd,Data,strlen(Data));
	
	printf("%d bytes successfully written in file \n",iRet);
	
	return 0;
}