import java.lang.*;
import java.util.*;

class Bitwise
{
	public long iNo;
	public long iMask;
	
	Bitwise(long a)
	{
		this.iNo = a;
		this.iMask = 0xf000000f;
	}
	
	boolean ChkOnNibble()
	{
		long iResult = iNo & iMask;
		
		if(iResult == iMask)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program201
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number");
		long iNo = sobj.nextLong();
		
		Bitwise bobj = new Bitwise(iNo);
		
		boolean iRet = bobj.ChkOnNibble();
		
		if(iRet == true)
		{
			System.out.println("First Nibble is on");
		}
		else
		{
			System.out.println("First Nibble is off");
		}
		
	}
}