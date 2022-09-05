import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a, int b)
	{
		super(a,b);
	}
	
	public int Maximum()
	{
		
		int iMax = Arr[0][0];
		
		for(int i = 0; i < Arr.length;i++)
		{
			for(int j = 0; j < Arr[i].length;j++)
			{
				if(iMax < Arr[i][j])
				{
					iMax = Arr[i][j];
				}
			}
		}
		
		return iMax;
	}
	
	public int Minimum()
	{
		
		int iMin = Arr[0][0];
		
		for(int i = 0; i < Arr.length;i++)
		{
			for(int j = 0; j < Arr[i].length;j++)
			{
				if(iMin > Arr[i][j])
				{
					iMin = Arr[i][j];
				}
			}
		}
		
		return iMin;
	}
}

class program192
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
		
		int iRet = mobj.Maximum();
		
		System.out.println("Maximum of no is : "+iRet);
		
		iRet = mobj.Minimum();
		
		System.out.println("Maximum of no is : "+iRet);
		
	}
}