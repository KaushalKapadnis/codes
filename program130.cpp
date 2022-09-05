#include<iostream>

using namespace std;

int StrlenX(char *Str)
{	
	int iCount = 0;
	while(*Str != '\0')
	{
		if((*Str == 'l') || (*Str == 'L'))
		{
			iCount++;
		}
		Str++;
	}
	return iCount;
}

int main()
{
	int iRet  = 0;
	char Arr[20];
	cout<<"Enter String"<<endl;
	
	//scanf("%[^'\n']s",Arr);
	
	cin.getline(Arr,20);
	
	iRet = StrlenX(Arr);
	
	cout<<"String contains l : "<<iRet<<" times"<<endl;
	
	return 0;
}