// Fig. 2.15: Comparison.java 
// Compare integers using if statements, relational operators 
// and equality operators.

import java.util.Scanner;

public class Comparison
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        
        int number1,
            number2;
        
        System.out.print("Enter a number: ");
        number1 = input.nextInt();
        
        System.out.print("Enter another number: ");
        number2 = input.nextInt();
        
        if (number1 == number2)
            System.out.printf("%d == %d\n", number1, number2);
        
        if (number1 != number2)
            System.out.printf("%d != %d\n", number1, number2);
        
        if (number1 < number2)
            System.out.printf("%d < %d\n", number1, number2);
        
        if (number1 > number2)
            System.out.printf("%d > %d\n", number1, number2);
        
        if (number1 <= number2)
            System.out.printf("%d <= %d\n", number1, number2);
        
        if (number1 >= number2)
            System.out.printf("%d >= %d\n", number1, number2);
    } // end method main
} // end class Comparison

