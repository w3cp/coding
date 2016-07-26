// CirclesTest.java
// excercise 5.1

import javax.swing.JFrame;
//import javax.swing.JOptionPane;

public class CirclesTest
{
    public static void main(String[] args)
    {
        int frameWidth = 400;
        int frameHeight = 400;
        // create the panel
        Circles panel = new Circles(frameWidth, frameHeight);
        
        // create a frame
        JFrame application = new JFrame();
        
        application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        application.add(panel); // add panel to the frame
        application.setSize(frameWidth, frameHeight); // set frame size
        application.setVisible(true); // show the frame
    } // end main
} // end class CirclesTest
