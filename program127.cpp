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
	char Arr[] = "Hello";
	
	Display(Arr);
	
	return 0;
}