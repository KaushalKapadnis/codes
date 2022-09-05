import java.lang.*;
import java.io.*;

class Numbers
{
	public int iNo;
	public boolean bFlag;
	
	public Numbers(int x)
	{
		this.iNo = x;
		this.bFlag = true;
	}
	
	public boolean ChkPrime()
	{
		int iCnt = 0;
		
		for(iCnt = 2; iCnt < (this.iNo); iCnt++)
		{
			if((this.iNo % iCnt ) == 0)
			{
				this.bFlag = false;
				break;
			}
		}
		
	return this.bFlag;
	}
}

class program36
{
	public static void main(String arg[])
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		
		int iValue = 0;
		boolean bRet = false; 
		
		System.out.println("Enter Number : ");
		try
		{
			iValue = Integer.parseInt(bobj.readLine());
		}
		catch(IOException obj)
		{
			
		}
		
		Numbers nobj = new Numbers(iValue);
		
		bRet = nobj.ChkPrime();
		
		if(bRet == true)
		{
			System.out.println(iValue + " is a prime number");
		}
		else
		{
			System.out.println(iValue + " is not a prime number");
		}
		
		
	}
}

// Time Complexity : O(N)
// where N is no of Digit