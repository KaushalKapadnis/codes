
//Count Vovels not case sensetive
#include<iostream>

using namespace std;

void struprX(char Str[])
{
	int iCnt = 0;
	
	while(*Str != '\0')
	{
		if((*Str >=97) && (*Str <=122))
		{
			*Str = *Str - 32;
		}
		
		Str++;
	}
}

int main()
{
	char Arr[20];

	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	struprX(Arr);
	cout<<"String in Upper Case  : "<<Arr<<endl;
	
	return 0;
}