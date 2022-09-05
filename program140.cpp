
//Reverse String
#include<iostream>

using namespace std;

void strcatX( char *Dest ,char *Src)
{
	while(*Dest != '\0')
	{
		Dest++;
	}
	
	*Dest = ' ';
	Dest++;
	
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
	
	
	cout<<"Enter 1st String"<<endl;
	cin.getline(Arr,20);
	cout<<"Enter 2st String"<<endl;
	cin.getline(Brr,20);
	
	strcatX(Arr,Brr);
	cout<<"String after Concatenation is : "<<Arr<<endl;
	
	return 0;
}