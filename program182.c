#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

bool FileCompare(char Source[], char Destination[])
{
	int Fdsrc = 0, Fddest = 0, iRet1 = 0,iRet2 = 0, i = 0 ,iCmp = 0;
	char Buffer1[FILESIZE];
	char Buffer2[FILESIZE];
	
	Fdsrc = open(Source,O_RDONLY); 
	if(Fdsrc == -1)
	{
		printf("Unable to open Source File \n");
		return false;
	}
	
	Fddest = open(Destination,O_RDONLY);
	if(Fddest == -1)
	{
		printf("Unable to open Destination File \n");
		return false;
	}
	
	while(1)
	{
		iRet1 = read(Fdsrc,Buffer1,FILESIZE);
		iRet2 = read(Fddest,Buffer2,FILESIZE);
		
		//iCmp = memcmp(Buffer1, Buffer2, iRet1);
		
		if((iRet1 != iRet2) || (iRet2 == 0) || (iRet1 == 0))
		{
			break;
		}
		
		iCmp = memcmp(Buffer1, Buffer2, iRet1);
		
		if(iCmp != 0)
		{
			break;
		}
	}
	
	close(Fddest);
	close(Fdsrc);
	
	if((iRet1 == 0) && (iRet2 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Fname1[20];
	char Fname2[20];
	
	bool bRet = false;
	
	printf("Enter File name which contains data\n");
	scanf("%s",Fname1);
	
	printf("Enter the File namein you want to Copy\n");
	scanf("%s",Fname2);
	
	bRet = FileCompare(Fname1,Fname2);
	
	if(bRet == false)
	{
		printf("Files are not Same\n");
	}
	else
	{
		printf("Files are Same\n");
	}
	
	return 0;
}