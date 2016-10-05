// Circles.java
// excercise 5.1

import java.awt.Graphics;
import javax.swing.JPanel;

public class Circles extends JPanel
{
    int frameCenterWidth;
    int frameCenterHeight;
    
    // constructor
    public Circles(int frameWidth, int frameHeight)
    {
        frameCenterWidth = frameWidth / 2;
        frameCenterHeight = frameHeight / 2;
    } // end constructor Circles
    
    public void paintComponent(Graphics g)
    {
        // call the super class first
        super.paintComponent(g);
        
        for (int i = 1; i <= 12; i++)
        {
            g.drawOval(frameCenterWidth - 10 * i, frameCenterHeight - 10 * i, 10 * i * 2, 10 * i * 2);
        } // end for
    } // end method paintComponent
} // end class Circles
