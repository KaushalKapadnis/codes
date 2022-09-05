
//Reverse String
#include<iostream>

using namespace std;

bool strcmpX(char *Src, char *Dest )
{
	
	while((*Src != '\0') && (*Dest != '\0'))
	{
		if(*Src != *Dest) 
		{
			if((*Src >= 65)) || (*Src <= 90))
			{
				if(*Src !)
			}
			break;
		}
		Src++;
		Dest++;
	}
	
	if((*Src == '\0') && (*Dest == '\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	char Arr[20];
	char Brr[20];
	
	bool bRet = false;
	
	cout<<"Enter 1st String"<<endl;
	cin.getline(Arr,20);
	cout<<"Enter 2st String"<<endl;
	cin.getline(Brr,20);
	
	bRet = strcmpX(Arr,Brr);
	
	if(bRet == true)
	{
		cout<<"Strings are Equal "<<endl;
	}
	else
	{
		cout<<"Strings are not Equal "<<endl;
	}
	
	
	
	return 0;
}