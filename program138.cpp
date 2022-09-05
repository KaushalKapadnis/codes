
//Reverse String
#include<iostream>

using namespace std;

void strrevX(char *Str)
{
	int iCnt = 0;
	char *End = Str;
	char *Start = Str;
	char temp = '\0';
	
	
	while(*End != '\0')
	{
		End++;
	}
	
	End--;
	
	while(End > Start)
	{
		
		temp = *End;
		*End= *Start;
		*Start = temp;
		
		End--;
		Start++;
	}
	
	/*for(;Start < End; Start++,End--)
	{
		temp = *End;
		*End= *Start;
		*Start = temp;
	}*/
	
}

int main()
{
	char Arr[20];

	cout<<"Enter String"<<endl;
	cin.getline(Arr,20);
	
	strrevX(Arr);
	cout<<"Reverse String is: "<<Arr<<endl;
	
	return 0;
}