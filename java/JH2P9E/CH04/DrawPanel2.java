// fig  DrawPanel2.java
// Using drawLine to connect the

import java.awt.Graphics;
import javax.swing.JPanel;

public class DrawPanel2 extends JPanel
{
	// draws an ... from the top-left corner of the panel
	public void paintComponent(Graphics g)
	{
		// call paintComponent to ensure the panel displays correctly
		super.paintComponent(g);
		
		int width = getWidth(); // total width
		int height = getHeight(); // total height
		int totalStep = 15; //
		int stepWidth = width / totalStep; // 
		int stepHeight = height / totalStep; //
		int loopCounter; //
		int width2 = 0,
			height2 = height;
		
		for (loopCounter = 0; loopCounter < totalStep; loopCounter++)
		{
			// draw line
			g.drawLine(0, 0, width2, height2);
			width2 += stepWidth;
			height2 -= stepHeight;
		} // end for
	} // end paintComponent
} // end class
