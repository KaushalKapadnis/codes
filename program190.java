import java.lang.*;
import java.util.*;

class program190
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of Rows");
		int iRow = sobj.nextInt();
		
		System.out.println("Entre Number of Coloumns");
		int iCol = sobj.nextInt();
		
		int Arr[][] = new int[iRow][iCol];
		
		System.out.println("Enter The Data");
		
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j < Arr[i].length; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Elements of Matrix are");
		
		for(int i = 0; i < iRow; i++)
		{
			for(int j = 0; j < iCol; j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
	
	Arr = null;
	System.gc();
}