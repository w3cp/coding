// Fig. 3.5: GradeBookTest2.java 
// Create GradeBook object and pass a String to 
// its displayMessage method.

import java.util.Scanner;

public class GradeBookTest2
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        
        // create a GradeBook2 object and assign it to myGradeBook
        GradeBook2 myGradeBook = new GradeBook2();
        
        // prompt for and input course name
        System.out.println("Please enter the course name: ");
        String nameOfCourse = input.nextLine();
        System.out.println();
        
        // call myGradeBook's displayMessage method
        // and pass nameOfCourse as an argument
        myGradeBook.displayMessage(nameOfCourse);
    } // end method main
} // end class GradeBookTest2

