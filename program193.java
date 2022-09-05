import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a, int b)
	{
		super(a,b);
	}
	
	public void MinimumInRow()
	{
		
		int iMin = Arr[0][0];
		
		for(int i = 0; i < Arr.length;i++)
		{
			iMin = Arr[i][0];
			
			for(int j = 0; j < Arr[i].length;j++)
			{
				if(iMin > Arr[i][j])
				{
					iMin = Arr[i][j];
				}
			}
			System.out.println("Minimum in Row" + (i+1)+" is : "+iMin);
		}
		
	}
	
	public void MaximumInRow()
	{
		
		int iMin = Arr[0][0];
		
		for(int i = 0; i < Arr.length;i++)
		{
			 iMin = Arr[i][0];
			
			for(int j = 0; j < Arr[i].length;j++)
			{
				if(iMin < Arr[i][j])
				{
					iMin = Arr[i][j];
				}
			}
			System.out.println("Maximum in Row" +(i+1)+" is : "+iMin);
		}
		
	}
}

class program193
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of Rows");
		int iRow = sobj.nextInt();
		
		System.out.println("Entre Number of Coloumns");
		int iCol = sobj.nextInt();
		
		MyMatrix mobj = new MyMatrix(iRow,iCol);
		mobj.Accept();
		mobj.Display();
		
		mobj.MinimumInRow();
		mobj.MaximumInRow();
	}
}