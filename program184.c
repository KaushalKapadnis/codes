#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
	char Fname[20], Data[10];
	int fd = 0;
	
	printf("Enter File name \n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return -1;
	}
	
	lseek(fd,-10,2);
	
	read(fd,Data,5);
	
	write(1,Data,5);
	
	return 0;
}