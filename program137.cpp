
#include<iostream>

using namespace std;

void strtoggleX(char Str[])
{
	int iCnt = 0;
	
	while(*Str != '\0')
	{
		if((*Str >= 'A') && (*Str <= 'Z')) 
		{
			*Str = *Str + 32;
		}
		else if((*Str >= 'a' ) && (*Str <= 'z'))
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
	
	strtoggleX(Arr);
	cout<<"Toggle String is: "<<Arr<<endl;
	
	return 0;
}