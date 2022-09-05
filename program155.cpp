#include<iostream>

using namespace std;

template<class T>
T Addition(T tNo1, T tNo2)
{
	T tAns;
	
	tAns = tNo1 + tNo2;
	
	return tAns;
}

int main()
{
	int iValue1 = 11, iValue2 = 21;
	int iRet = 0;
	
	iRet = Addition(iValue1,iValue2);

	cout<<"Addition is : "<<iRet<<endl;
	
	
	float fValue1 = 11.11, fValue2 = 21.55;
	float fRet = 0.0;
	
	fRet = Addition(fValue1,fValue2);

	cout<<"Addition is : "<<fRet<<endl;
	
	
	double dValue1 = 11.1161, dValue2 = 21.5549;
	double dRet = 0.0;
	
	dRet = Addition(dValue1,dValue2);

	cout<<"Addition is : "<<dRet<<endl;
	
	return 0;
}