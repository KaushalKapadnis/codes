import java.lang.*;
import java.io.*;

////////////////////////////////////////////////////////////////////////////////
//
//	Name of Class : Digits
//	Characteristics : Integer
//	Author : Kaushal Sachin Kapadnis
//  Date : 	20/4/2022
//
////////////////////////////////////////////////////////////////////////////////


class Digits
{
	public int iNo;
	
	public Digits(int x)
	{
		this.iNo = x;
	}

///////////////////////////////////////////////////////////////////////////////
//
//	Name : DisplayDigits
//	Description : Display Digits of Characteristics
//	Author : Kaushal Sachin Kapadnis
//  Date : 	27/4/2022
//
///////////////////////////////////////////////////////////////////////////////

	public void DisplayDigits()
	{
		int iDigit = 0;
		
		while(this.iNo != 0)
		{
			iDigit = this.iNo % 10;
			System.out.println(iDigit);
			this.iNo = (this.iNo / 10);
		}
	}
}


///////////////////////////////////////////////////////////////////////////////////
//	Entry point Function
///////////////////////////////////////////////////////////////////////////////////

class program37
{
	public static void main(String arg[])
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		
		int iValue = 0;
		
		System.out.println("Enter Number : ");
		try
		{
			iValue = Integer.parseInt(bobj.readLine());
		}
		catch(IOException obj)
		{
			
		}
		
		Digits dobj = new Digits(iValue);
		
		dobj.DisplayDigits();
	}
}