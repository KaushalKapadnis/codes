import java.lang.*;
import java.util.*;

class Numbers
{
	public int iNo;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number : ");
		this.iNo = sobj.nextInt();
		
	}
	
	public void Display()
	{
		System.out.println(this.iNo);
	}
	
	public int Factorial()
	{
		int iFact = 1,iCnt = 0;
	
		for(iCnt = 1;iCnt <= iNo; iCnt++)
		{
			iFact *= iCnt;
		}
			
		return iFact;
	}
}

class program122
{
	public static void main(String arg[])
	{
		
		Numbers nobj = new Numbers();
		
		int iRet = 0;
		
		nobj.Accept();
		nobj.Display();
		
		iRet = nobj.Factorial();
		
		System.out.println("Factorial is : "+iRet); 	
	}
}