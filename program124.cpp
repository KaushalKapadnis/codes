#include<iostream>

using namespace std;

class ArrayX
{ 
	private :
		int *Arr;
		int iSize;
		
	public :
		
		ArrayX(int iValue)
		{
			this -> iSize = iValue;
			this -> Arr = new int[iSize];
		}
		
		~ArrayX()
		{
			delete []Arr;
		}
		
		void Accept()
		{
			int iCnt = 0;
			
			cout<<"Enter no of elements : \n"<<endl;
			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		
		void Display()
		{
			int iCnt = 0;
			
			cout<<"Values are : "<<endl;
			for(iCnt = 0; iCnt < iSize; iCnt++)
			{
				cout<<Arr[iCnt]<<endl;
			}
		}
	
		int Summation()
		{
			int iSum = 0,iCnt = 0;
			
			for(iCnt = 0;iCnt < iSize;iCnt++)
			{
				iSum = iSum + Arr[iCnt];
			}
			
			return iSum;
		}
};

int main()
{
	int iRet = 0,iSize = 0;
	
	cout<<"Enter size of array :"<<endl;
	cin>>iSize;
	
	ArrayX aobj(iSize);
	
	aobj.Accept();
	aobj.Display();
	
	iRet = aobj.Summation();
	
	cout<<"summation is : "<<iRet<<endl;
	
	return 0;
}