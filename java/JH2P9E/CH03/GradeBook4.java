//  Fig. 3.10 GradeBook4.java
// GradeBook4 class with a constructor to initialize the course name

public class GradeBook4
{
	private String courseName; // course name for this GradeBook4
	private String instructorName; // instructor name for this GradeBook4
	
	// constructor initializes courseName with String argument
	public GradeBook4(String _courseName, String _instructorName) // no return type; not even void
	{
		courseName = _courseName; // initializes courseName
		instructorName = _instructorName; // initializes instructorName
	} // end constructor GradeBook4
	
	// method to set the course name
	public void setCourseName(String _courseName, String _instructorName)
	{
		courseName = _courseName; // store the course name
		instructorName = _instructorName; // store the instructorName
	} // end method setCourseName
	
	// method to retrieve the course name
	public String getCourseName()
	{
		return courseName;
	} // end method getCourseName
	
	// method to retrieve the course name
	public String getInstructorName()
	{
		return instructorName;
	} // end method getCourseName
	
	// display a welcome message to the GradeBook4 user
	public void displayMessage()
	{
		// this statement calls getCourseName and getInstructorName to
		// get the name of the course this GradeBook4 represents
		System.out.printf("\nCourse Name: %s!\nInstructor name: %s\n",
			getCourseName(), getInstructorName());
	} // end method displayMessage
} // end class GradeBook4
