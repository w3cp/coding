// Fig. 2.7: [Modified - GUI] Addition2.java
// Addition program that displays the sum of two numbers.

import javax.swing.JOptionPane; // program uses class JOptionPane

public class Addition2
{
    public static void main(String[] args)
    {
        // prompt user to enter a string number
        String num1 = JOptionPane.showInputDialog("Enter a number: ");
		String num2 = JOptionPane.showInputDialog("Enter another number: ");
        
		// convert num1 num2 string to integer then add them
        int sum = Integer.parseInt(num1) + Integer.parseInt(num2);
		
		// create answer
		String ans = String.format("Sum is %d\n", sum);
        
        // display the answer
		JOptionPane.showMessageDialog(null, ans);
    } // end method main
} // end class Addition2
