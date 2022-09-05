import java.lang.*;
import java.util.*;

class Bitwise
{
	public int iNo;
	
	public Bitwise(int a)
	{
		this.iNo = a;
	}
	
	public void displayBinary()
	{
		int iDigit = 0, iTemp = 0;
		while(this.iNo != 0)
		{
			iDigit = this.iNo % 2;
			
			iTemp = iTemp*10 + iDigit;
			this.iNo = this.iNo / 2;
		}
		
		while(iTemp != 0)
		{
			iDigit = iTemp % 10;
			this.iNo = this.iNo*10 + iDigit;
			iTemp = iTemp / 10;
		}
		
		System.out.println(iNo);
	}
}

class program145
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number : ");
		int iValue = sobj.nextInt();
		
		Bitwise bobj = new Bitwise(iValue);
		
		bobj.displayBinary();
	}
}