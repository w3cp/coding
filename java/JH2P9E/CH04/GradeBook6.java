// fig 4.9 GradeBook6.java
// GradeBook6 class that solves class-average problem using
// counter-controlled repetition

import java.util.Scanner;

public class GradeBook6
{
	private String courseName;
	
	// constructor 
	public GradeBook6(String name)
	{
		courseName = name;
	} // end constructor
	
	public void setCourseName(String name)
	{
		courseName = name;
	} // end setCourseName
	
	public String getCourseName()
	{
		return courseName;
	} // end getCourseName
	
	// display a welcome message
	public void displayMessage()
	{
		System.out.printf("Welcome to the GradeBook6 for\n%s!\n\n",
			getCourseName());
	} // end displayMessage
	
	// deteremine class average based on 10 grades entered by user
	public void determineClassAverage()
	{
		Scanner input = new Scanner(System.in);
		
		int total;
		int gradeCounter;
		int grade;
		double average;
		
		// initialization
		total = 0;
		gradeCounter = 0;
		
		// processing
		System.out.printf("Enter grade or -1 to quit: ");
		grade = input.nextInt();
		
		while (grade != -1)
		{
			total += grade;
			gradeCounter++;
			System.out.printf("Enter grade or -1 to quit: ");
			grade = input.nextInt();
		} // end while
		
		// termination
		if (gradeCounter != 0)
		{
			average = (double) total / gradeCounter;
			
			// display result
			System.out.printf("\nTotal of the %d grades entered is %d\n",
				gradeCounter, total);
			System.out.printf("Class average is %.2f\n", average);
		} // end if
		else
			System.out.println("No Grades were entered");
	} // end determineClassAverage 
} // end class
