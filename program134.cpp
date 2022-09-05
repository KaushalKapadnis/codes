
//Count Vovels not case sensetive
#include<iostream>

using namespace std;

int CountSpace(char Str[])
{
	int iCnt = 0;
	
	while(*Str != '\0')
	{
		if((*Str == 'a') || (*Str == 'e') ||(*Str == 'i') || (*Str == 'o') || (*Str == 'u') || (*Str == 'A') || (*Str == 'E') ||(*Str == 'I') || (*Str == 'O') || (*Str == 'U'))
		{
			iCnt++;
		}
		Str++;
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;

	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	iRet = CountSpace(Arr);
	cout<<"Number of Vovels are : "<<iRet<<endl;
	
	return 0;
}