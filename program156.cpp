#include<iostream>

using namespace std;

template<class T>
void Display(T Crr[], int Size)
{
	int iCnt= 0;
	
	cout<<"Data is :"<<endl;
	
	for(iCnt = 0;iCnt < Size; iCnt++)
	{
		cout<<Crr[iCnt]<<endl;
	}
}

int main()
{
	int Arr[] = {10,25,41};
	
	Display(Arr,3);
	
	float Brr[] = {10.15,25.42,41.44};
	
	Display(Brr,3);
	
	return 0;
}