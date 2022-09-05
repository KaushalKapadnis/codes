import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iValue)
	{
		Arr = new int[iValue];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		int iCnt = 0;
		
		System.out.println("Enter Elements :");
		for(iCnt = 0; iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}	
	}
	
	public void Display()
	{
		int iCnt = 0;
		
		System.out.println("Elements are :");
		for(iCnt = 0; iCnt < Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
		
	}
	
	public int Summation()
	{
		int iSum = 0,iCnt = 0;
			
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
			
		return iSum;
	}
}

class program124
{
	public static void main(String arg[])
	{
		int iRet = 0, iNo = 0;
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array");
		iNo = sobj.nextInt();
		
		ArrayX aobj = new ArrayX(iNo);
		
		aobj.Accept();
		aobj.Display();
		
		iRet = aobj.Summation();
		
		System.out.println("Summation is "+iRet);
		
		obj = null;
		
	}
	
}