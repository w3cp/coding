// fig 4.6 GradeBook5.java
// GradeBook5 class that solves class-average problem using
// counter-controlled repetition

import java.util.Scanner;

public class GradeBook5
{
	private String courseName;
	
	// constructor 
	public GradeBook5(String name)
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
		System.out.printf("Welcome to the GradeBook5 for\n%s!\n\n", getCourseName());
	} // end displayMessage
	
	// deteremine class average based on 10 grades entered by user
	public void determineClassAverage()
	{
		Scanner input = new Scanner(System.in);
		
		int total;
		int gradeCounter;
		int grade;
		int average;
		
		// initialization
		total = 0;
		gradeCounter = 1;
		
		while (gradeCounter <= 10)
		{
			System.out.printf("Enter grade: ");
			grade = input.nextInt();
			total += grade;
			gradeCounter++;
		} // end while
		
		// termination
		average = total / 10;
		
		// display result
		System.out.printf("\nTotal of all 10 grades is %d\n", total);
		System.out.printf("Class average is %d\n", average);
	} // end determineClassAverage 
} // end class
