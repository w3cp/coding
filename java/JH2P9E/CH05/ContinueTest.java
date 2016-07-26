// 5.13 ContinueTest.java
// 

public class ContinueTest
{
	public static void main(String[] args)
	{
		int count;
		
		for (count = 1; count <= 10; count++)
		{
			if (count == 5)
				continue; // skip remaining code in loop
			
			System.out.printf("%d ", count);
		} // end for
		
		System.out.printf("\nUsed continue to skip printing 5");
	} // end main
} // end class ContinueTest
