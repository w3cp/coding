// Fig. 3.8: GradeBookTest3.java
// Creating and manipulating a Gradebook3 object

import java.util.Scanner; // program uses Scanner

public class GradeBookTest3
{
	public static void main(String[] args)
	{
		// create Scanner to obtain input from command window
		Scanner input = new Scanner(System.in);
		
		// create a Gradebook3 object and assign it to myGradeBook
		GradeBook3 myGradeBook = new GradeBook3();
		
		// display initial value of courseName
		System.out.printf("Initial course name is: %s\n\n",
			myGradeBook.getCourseName());
		
		// prompt for and read course name
		System.out.printf("Please enter the course name: ");
		String theName = input.nextLine(); // read a line of text
		myGradeBook.setCourseName(theName); // set the course name
		System.out.println(); // outputs a blank line
		
		// display welcome message after specifying course name
		myGradeBook.displayMessage();
	} // end method main
} // end class GradeBookTest3
