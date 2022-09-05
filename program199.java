import java.lang.*;
import java.util.*;


class program199
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int no = sobj.nextInt();
		
		//int length = String.valueOf(no).length();
		String str =  Integer.toString(no);
		
		char Arr[] = str.toCharArray();
		
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j < Arr.length; j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		
		
	}
}