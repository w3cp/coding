// 5.10 GradeBookTest7.java
// Create GradeBook7 object, input grades and display grade report.

public class GradeBookTest7
{
	public static void main(String[] args)
	{
		// create GradeBook7 object myGradeBook and
		// pass course name to constructor
		GradeBook7 myGradeBook = new GradeBook7("CS101 Introduction to Java Programming");
		
		myGradeBook.displayMessage();
		myGradeBook.inputGrades();
		myGradeBook.displayGradeReport();
	} // end main
} // end class GradeBookTest7
