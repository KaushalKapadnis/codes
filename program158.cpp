#include<iostream>

using namespace std;

template<class T>
class ArrayX
{
	public :
		T *Arr;
		int Size;

		ArrayX(int value);
		~ArrayX();
		void Accept();
		void Display();
		T Maximum();
};

template<class T>
ArrayX<T>::ArrayX(int value)
{
	Size = value;
	Arr = new T[Size];
}

template<class T>
ArrayX<T>::~ArrayX()
{
	delete[] Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
	cout<<"Enter the values"<<endl;
			
	for(int iCnt = 0;iCnt < Size;iCnt++)
	{
		cin>>Arr[iCnt];
	}
}

template<class T>
void ArrayX<T>::Display()
{
	cout<<"Values are"<<endl;
	for(int iCnt = 0;iCnt < Size; iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}
			
	cout<<endl;
}

template<class T>
T ArrayX<T>::Maximum()
{
	T Max = Arr[0];
	
	for(int iCnt = 0;iCnt < Size;iCnt++)
	{
		if(Max < Arr[iCnt])
		{
			Max = Arr[iCnt];
		}
	}
			
	return Max;
}


int main()
{
	ArrayX <int>obj(5);
	ArrayX <float>obj1(5);
	
	obj.Accept();
	obj.Display();
	
	int iRet = obj.Maximum();
	cout<<"Maximum no is : "<<iRet<<endl;
	
	cout<<endl<<endl;
	
	obj1.Accept();
	obj1.Display();
	
	float fRet = obj1.Maximum();
	cout<<"Maximum no is : "<<fRet<<endl;

	return 0;
}