// Fig 3.7: GradeBook3.java
// GradeBook3 class that contains a courseName instance variable
// and methods to set and get its value.

public class GradeBook3
{
	private String courseName; // course name for this GradeBook3
	
	// method to set the course name
	public void setCourseName(String name)
	{
		courseName = name; // store the course name
	} // end method setCourseName
	
	// method to retrieve the course name
	public String getCourseName()
	{
		return courseName;
	} // end method getCourseName
	
	// display a welcome message to the GradeBook3 user
	public void displayMessage()
	{
		// calls getCourseName to get the name of
		// the course this GradeBook3 represents
		System.out.printf("Welcome to the grade book for\n%s!\n", getCourseName());
	} // end method displayMessage
} // end class GradeBook3
