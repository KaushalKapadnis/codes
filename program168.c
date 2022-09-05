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
	
	printf("Enter file name to create\n");
	scanf("%s",Fname);
	
	printf("Enterthe data you want to write \n");
	scanf(" %[^'\n']s",Data);
	
	fd = creat(Fname,0777);
	
	if(fd == -1)
	{
		printf("Unable to create file");
		return -1;
	}
	else
	{
		printf("File is Succesfully created with fd %d\n",fd);
	}
	
	iRet = write(fd,Data,strlen(Data));
	
	printf("%d bytes succesfully written in file \n",iRet);
	
	return 0;
}