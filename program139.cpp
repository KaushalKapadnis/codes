
//Reverse String
#include<iostream>

using namespace std;

void strcpyX(char *Src, char *Dest)
{
	while(*Src != '\0')
	{
		*Dest = *Src;
		Src++;
		Dest++;
	}
	
	*Dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr);
	cout<<"Duplicate String is : "<<Brr<<endl;
	
	return 0;
}