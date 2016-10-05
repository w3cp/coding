// fig 4.12 Analysis.java
// Analysis of examination results using nested control statements

import java.util.Scanner;

public class Analysis
{
	public static void main(String[] args)
	{
		Scanner input = new Scanner(System.in);
		
		// initializing variables in declarations
		int passes = 0;
		int failures = 0;
		int studentCounter = 1;
		int result;
		
		while (studentCounter <= 10)
		{
			System.out.print("Enter result (1 = pass, 2 = fail): ");
			result = input.nextInt();
			
			if (result == 1)
				passes++;
			else
				failures++;
			
			studentCounter++;
		} // end while
		
		// termination phase
		System.out.printf("Passed: %d\nFailed: %d\n", passes, failures);
		
		// determine whether more than 8 students passed
		if (passes > 8)
			System.out.println("Bonus to instructor!");
	} // end main
} // end class
