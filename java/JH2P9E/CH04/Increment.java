// fig 4.15 Increment.java
// Prefix increment and postfix increment operators

public class Increment
{
	public static void main(String[] args)
	{
		int c;
		
		// demonstrate postfix increment operator 
		c = 5;
		System.out.println(c); // 5
		System.out.println(c++); // 5
		System.out.println(c); // 6
		
		System.out.println(); // skip a line
		
		// demonstrate prefix increment operator
		c = 5;
		System.out.println(c); // 5
		System.out.println(++c); // 6
		System.out.println(c); // 6
	} // end main
} // end class
