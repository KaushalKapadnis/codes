#include<iostream>

using namespace std;

template<class T>
T Maximum(T Crr[], int Size)
{
	int iCnt= 0;
	
	T Max = Crr[0];
		
	for(iCnt = 0;iCnt < Size; iCnt++)
	{
		if(Max < Crr[iCnt])
		{
			Max = Crr[iCnt];
		}
	}
	
	return Max;
}

int main()
{
	int Arr[] = {10,25,41};
	int iRet = 0;
	
	iRet =  Maximum(Arr,3);
	
	cout<<"Maximum no is : "<<iRet<<endl;
	
	float Brr[] = {10.15,25.42,41.44};
	float fRet = 0.0;
	
	fRet = Maximum(Brr,3);
	cout<<"Maximum no is : "<<fRet<<endl;

	return 0;
}