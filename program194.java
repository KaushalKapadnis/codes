import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a, int b)
	{
		super(a,b);
	}
	
	public void SwapRow()
	{
		int iTemp= 0;
		
		for(int i = 0; i < (Arr.length - 1);i+=2)
		{
			for(int j = 0; j < Arr[i].length;j++)
			{
				iTemp = Arr[i][j];
				Arr[i][j] = Arr[i+1][j];
				Arr[i+1][j] = iTemp;
			}
		}
		
	}
	
	public void SwapCol()
	{
		int iTemp= 0;
		
		for(int i = 0; i < Arr.length;i++)
		{
			for(int j = 0; j < (Arr[i].length - 1);j+=2)
			{
				iTemp = Arr[i][j];
				Arr[i][j] = Arr[i][j+1];
				Arr[i][j+1] = iTemp;
			}
		}
		
	}
}

class program194
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
		
		mobj.SwapRow();
		
		System.out.println("Data after Swapping is : ");
		mobj.Display();
		
		mobj.SwapCol();
		System.out.println("Data after Swapping is : ");
		mobj.Display();
	}
}