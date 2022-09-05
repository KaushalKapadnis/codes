import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow;
	private int iCol;
	
	public Pattern(int a, int b)
	{
		this.iRow = a;
		this.iCol = b;
	}
	
	public void DisplayPattern()
	{
		int i = 0, j = 0;
		for(i = 1;i <= this.iRow; i++)
		{
			for(j = 1; j<= this.iCol; j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}	
	}
}

class program125
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iRow = 0,iCol = 0;

		System.out.println("Enter row");
		iRow = sobj.nextInt();
		
		System.out.println("Enter column");
		iCol = sobj.nextInt();
		
		Pattern pobj = new Pattern(iRow,iCol);
		
		pobj.DisplayPattern();
	}
	
}
