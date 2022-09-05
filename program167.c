#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	
	char Fname[20];
	int fd = 0;   //file descriptor
	
	printf("Enter file name to create\n");
	scanf("%s",Fname);
	
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
	
	return 0;
}