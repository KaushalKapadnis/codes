import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

//class MyMatrix{}

class program191
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of Rows");
		int iRow = sobj.nextInt();
		
		System.out.println("Entre Number of Coloumns");
		int iCol = sobj.nextInt();
		
		Matrix mobj = new Matrix(iRow,iCol);

		mobj.Accept();
		mobj.Display();
		
		int iMax = mobj.Arr[0][0];
		
		for(int i = 0; i < mobj.Arr.length;i++)
		{
			for(int j = 0; j < mobj.Arr[i].length;j++)
			{
				if(iMax < mobj.Arr[i][j])
				{
					iMax = mobj.Arr[i][j];
				}
			}
		}
		
		System.out.println(iMax);
	}
}