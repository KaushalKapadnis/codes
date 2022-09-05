#include<iostream>

using namespace std;

int strlenX(char Str[])
{	int iCount = 0;
	while(*Str != '\0')
	{
		iCount++;
		Str++;
	}
	return iCount;
}

int main()
{
	int iRet =0;
	char Arr[20];
	cout<<"Enter String"<<endl;
	
	scanf("%[^'\n']s",Arr);
	//cin.getline(Arr,20);
	
	iRet = strlenX(Arr);
	
	cout<<"String Length is : "<<iRet<<endl;
	return 0;
}