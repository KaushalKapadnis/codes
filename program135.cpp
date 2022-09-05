
//Count Vovels not case sensetive
#include<iostream>

using namespace std;

void strlwxX(char Str[])
{
	int iCnt = 0;
	
	while(*Str != '\0')
	{
		if((*Str >=65) && (*Str <=90))
		{
			*Str = *Str + 32;
		}
		
		Str++;
	}
}

int main()
{
	char Arr[20];

	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	strlwx(Arr);
	cout<<"String in Lower Case  : "<<Arr<<endl;
	
	return 0;
}