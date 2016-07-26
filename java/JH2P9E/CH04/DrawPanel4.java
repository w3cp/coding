// fig  DrawPanel4.java
// Using drawLine to connect the

import java.awt.Graphics;
import javax.swing.JPanel;

public class DrawPanel4 extends JPanel
{
	// draws an ... corner of the panel
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
			height2 = 0,
			width3 = stepWidth,
			height3 = height;
		
		// 
		for (loopCounter = 0; loopCounter < totalStep; loopCounter++)
		{
			// draw line
			g.drawLine(width2, height2, width3, height3); // from top-left
			height2 += stepHeight;
			width3 += stepWidth;
		} // end for
	} // end paintComponent
} // end class
