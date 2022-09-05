import java.lang.*;
import java.io.*;


class Numbers
{
	public int iNo1;
	public int iNo2;
	
	public Numbers(int x, int y)
	{
		this.iNo1 = x;
		this.iNo2 = y;
	}
	 
	public int Power()
	{
		int iCnt = 0;
		int iMult = 1;
		for(iCnt = 1; iCnt <= this.iNo2; iCnt++)
		{
			iMult = iMult * this.iNo1;
		}
		
		return iMult;
	}
	
}

class program55
{
	public static void main(String arg[])
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		
		BufferedReader bobj = new BufferedReader(iobj);
		
		int iValue1 = 0;
		int iValue2 = 0;
		int iRet = 0;
		
		try
		{
			System.out.println("Enter Number : ");
			
			iValue1 = Integer.parseInt(bobj.readLine());
			
			System.out.println("Enter Second Number ");
			
			iValue2 = Integer.parseInt(bobj.readLine());
		}
		catch(IOException obj)
		{
			
		}
		
		Numbers  nobj = new Numbers(iValue1,iValue2);
		
		iRet = nobj.Power();
		
		System.out.println(iValue1+ " raise to " + iValue2 +" is " +iRet);
		
	}
}