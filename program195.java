import java.lang.*;
import java.util.*;


class program195
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		for(int i = 0; i< Arr.length;i++)
		{
			for(int j = 0; j < Arr.length;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		
	}
}