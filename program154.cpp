#include<iostream>

using namespace std;

template<class T>
void SwapR(T &iValue1, T &iValue2)
{
	T temp;
	
	temp = iValue1;
	iValue1 = iValue2;
	iValue2 = temp;
}


int main()
{
	int iNo1 = 11, iNo2 = 21;
	cout<<"Before Swap : "<<iNo1<<" "<<iNo2<<endl;
	SwapR(iNo1, iNo2);
	cout<<"After Swap : "<<iNo1<<" "<<iNo2<<endl;
	
	float fNo1 = 11.12, fNo2 = 21.45;
	cout<<"Before Swap : "<<fNo1<<" "<<fNo2<<endl;
	SwapR(fNo1, fNo2);
	cout<<"After Swap : "<<fNo1<<" "<<fNo2<<endl;

	char cNo1 = 'A', cNo2 = 'B';	
	cout<<"Before Swap : "<<cNo1<<" "<<cNo2<<endl;
	SwapR(cNo1, cNo2);
	cout<<"After Swap : "<<cNo1<<" "<<cNo2<<endl;	
	
	return 0;
}