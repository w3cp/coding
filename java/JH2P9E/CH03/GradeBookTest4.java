// Fig. 3.11: GradeBookTest4.java
// GradeBook4 constructor used to specify the course name at the
// time each GradeBook4 object is created.

public class GradeBookTest4
{
	public static void main(String[] args)
	{
		// create GradeBook4 object
		GradeBook4 gradeBook1 = new GradeBook4(
			"CS101 Introduction to Java Programming", "Anwar Hossain");
		GradeBook4 gradeBook2 = new GradeBook4(
			"CS102 Data Structures in Java", "Asha");
		
		// display initial value of courseName for each GradeBook4
		System.out.printf("\n\ngradeBook1:\n\t Course name is: %s\n\t Instructor name is: %s.\n",
			gradeBook1.getCourseName(), gradeBook1.getInstructorName());
		System.out.printf("gradeBook2:\n\t Course name is: %s\n\t Instructor name is: %s.\n",
			gradeBook2.getCourseName(), gradeBook2.getInstructorName());
		
		// display message
		gradeBook1.displayMessage();
		gradeBook2.displayMessage();
	} // end method main
} // end class GradeBookTest4