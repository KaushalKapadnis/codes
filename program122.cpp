#include<iostream>

using namespace std;

class Numbers
{
	private:
		int iNo;
		
	public :
		
		/*Numbers(int a)
		{
			iNo = a;
		}*/
		
		void Accept()
		{
			cout<<"Enter the Value : "<<endl;
			cin>>this->iNo;
		}
			
		void Display()
		{
			cout<<"Value is : "<<this -> iNo<<endl;
		}
			
		int Factorial()
		{
			int iFact = 1,iCnt = 0;
	
			for(iCnt = 1;iCnt <= iNo; iCnt++)
			{
				iFact *= iCnt;
			}
			
			return iFact;
		}
		
};							
		
int main()
{
	//Numbers nobj(iValue);
	Numbers nobj;
		
	int iRet = 0;//iValue = 0;
		
	//cout<<"Enter Number :"<<endl;
	//cin>>iValue;
	nobj.Accept();
	nobj.Display();
	
	iRet = nobj.Factorial();
		
		
	cout<<"Factorial is : "<<iRet<<endl;
		
	return 0;
}