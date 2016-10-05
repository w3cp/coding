// 5.12 BreakTest.java
// 

public class BreakTest
{
	public static void main(String[] args)
	{
		int count;
		
		for (count = 1; count <= 10; count++)
		{
			if (count == 5)
				break;
			
			System.out.printf("%d ", count);
		} // end for
		
		System.out.printf("\nBroke out of loop at count = %d\n", count);
	} // end main
} // end class BreakTest
