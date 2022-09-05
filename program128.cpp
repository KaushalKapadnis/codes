#include<iostream>

using namespace std;

void Display(char *Str)
{	
	while(*Str != '\0')
	{
		cout<<*Str<<endl;
		Str++;
	}
}

int main()
{
	char Arr[20];
	cout<<"Enter String"<<endl;
	
	scanf("%[^'\n']s",Arr);
	//cin.getline(Arr,20);
	
	Display(Arr);
	
	return 0;
}