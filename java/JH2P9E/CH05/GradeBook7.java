// 5.9 GradeBook7.java
// GradeBook class uses switch statement to count letter grades.

import java.util.Scanner;

public class GradeBook7
{
	private String courseName;
	// int instance variables are initialized to 0 by default
	private int total; // sum of grades
	private int gradeCounter;
	private int aCount; // count of A grades
	private int bCount; // count of B grades
	private int cCount; // count of C grades
	private int dCount; // count of D grades
	private int fCount; // count of F grades
	
	// constructor
	public GradeBook7(String name)
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
		System.out.printf("Welcome to the grade book for \n%s!\n\n", 
			getCourseName());
	} // end displayMessage
	
	// input arbitrary number of grades from user
	public void inputGrades()
	{
		Scanner input = new Scanner(System.in);
		
		int grade; // grade entered by user
		
		System.out.printf("%s\n%s\n  %s\n  %s\n", 
		"Enter the integer grades in the range 0-100", 
		"Type the end-of-file indicator to terminate input: ", 
		"On UNIX/Linux/Mac OS type <Ctrl> d then press enter", 
		"On Windows type <Ctrl> z then press enter");
		
		// loop until user enters the end-of-file indicator
		while (input.hasNext())
		{
			grade = input.nextInt();
			total += grade;
			++gradeCounter;
			
			// call method to increment appropriate counter
			incrementLetterGradeCounter(grade);
		} // end while
	} // end inputGrades
	
	// add 1 to appropriate counter for specified grade
	private void incrementLetterGradeCounter(int grade)
	{
		// determine which grade was entered 
		switch (grade / 10)
		{
			case 9: // grade was between 90
			case 10: // and 100, inclusive
				++aCount;
				break; // necessary to exit switch
		
			case 8: // grade was between 80 and 89
				++bCount;
				break; // exit switch
			
			case 7: // grade was between 70 and 79
				++cCount;
				break; // exit switch
			
			case 6: // grade was between 60 and 69
				++dCount;
				break; // exit switch
			
			default: // grade was less than 60
				++fCount;
				break; // optional; will exit switch anyway
		} // end switch
	} // end incrementLetterGradeCounter
	
	// display a report based on the grades entered by the user
	public void displayGradeReport()
	{
		System.out.println("\nGrade Report: ");
		
		// if user entered at least one grade
		if (gradeCounter != 0)
		{
			// calculate average of all grades entered
			double average = (double) total / gradeCounter;
			
			// output summary of results
			System.out.printf("Total of the %d gradess entered is %d\n", 
				gradeCounter, total);
			System.out.printf("Class average is: %.2f\n", average);
			System.out.printf("%s\n%s%d\n%s%d\n%s%d\n%s%d\n%s%d\n", 
				"Number of students who received each grade: ", 
				"A: ", aCount, 
				"B: ", bCount, 
				"C: ", cCount, 
				"D: ", dCount, 
				"F: ", fCount);
		} // end if 
		else // no grades were entered, so output appropriate message
			System.out.println("No grades were entered!");
	} // end displayGradeReport
} // end class GradeBook7
