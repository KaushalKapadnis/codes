import java.lang.*;
import java.util.*;
//Input 79959

/*
7 + 9 + 9 +5    39
3 + 9 12
1 + 2  3
*/

class program200
{
	public static void main(String argv[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter Number");
		
		int no = sobj.nextInt();
		int iSum = 0;
		
		while((no % 10) != no)
		{
			iSum = 0;
			while(no != 0)
			{
				iSum = iSum + (no % 10);
				no = no / 10;
			}
			System.out.println(iSum);
			no = iSum;
		}
			
		
		
	}
}