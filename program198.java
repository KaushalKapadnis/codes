import java.lang.*;
import java.util.*;


class program198
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		for(int i = 0; i< Arr.length;i++)
		{
			for(int j = 0; j <= i;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		for(int i = Arr.length - 2; i >= 0;i--)
		{
			for(int j = 0; j <= i;j++)
			{
				System.out.print(Arr[j]+" ");
			}
			System.out.println();
		}
		
	}
}