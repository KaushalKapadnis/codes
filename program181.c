#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

#define FILESIZE 1024

void FileConcate(char Source[], char Destination[])
{
	int Fdsrc = 0, Fddest = 0, iRet = 0, i = 0;
	char Buffer[FILESIZE];
	
	Fdsrc = open(Source,O_RDONLY); 
	if(Fdsrc == -1)
	{
		printf("Unable to open Source File \n");
		return;
	}
	
	Fddest = open(Destination,O_WRONLY | O_APPEND);
	if(Fddest == -1)
	{
		printf("Unable to open Destination File \n");
		return;
	}
	
	while((iRet = read(Fdsrc,Buffer,FILESIZE)) != 0)
	{
		write(Fddest,Buffer,iRet);
	}
	
	close(Fddest);
	close(Fdsrc);
}

int main()
{
	char Fname1[20];
	char Fname2[20];
	
	printf("Enter File name which contains data\n");
	scanf("%s",Fname1);
	
	printf("Enter the File namein you want to Copy\n");
	scanf("%s",Fname2);
	
	FileConcate(Fname1,Fname2);
	
	return 0;
}