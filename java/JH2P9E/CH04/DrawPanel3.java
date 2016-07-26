// fig  DrawPanel3.java
// Using drawLine to connect the

import java.awt.Graphics;
import javax.swing.JPanel;

public class DrawPanel3 extends JPanel
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
			height2 = height,
			//width3 = width,
			height3 = 0;
		
		// 
		for (loopCounter = 0; loopCounter < totalStep; loopCounter++)
		{
			// draw line
			g.drawLine(0, 0, width2, height2); // from top-left
			g.drawLine(width, height, width2, height2); // from bottom-right
			g.drawLine(width, 0, width2, height3); // from top-right
			g.drawLine(0, height, width2, height3); // from bottom-left
			width2 += stepWidth;
			height2 -= stepHeight;
			//width3 -= stepWidth;
			height3 += stepHeight;
		} // end for
	} // end paintComponent
} // end class
