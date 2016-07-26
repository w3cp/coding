// fig  DrawPanel5.java
// Using drawLine to connect the

import java.awt.Graphics;
import javax.swing.JPanel;

public class DrawPanel5 extends JPanel
{
	// draws an ... corner of the panel
	public void paintComponent(Graphics g)
	{
		// call paintComponent to ensure the panel displays correctly
		super.paintComponent(g);
		
		int width = getWidth(); // total width
		int height = getHeight(); // total height
		int totalStep = 15; //
		int loopCounter; //
		
		int stepWidth = width / totalStep; // 
		int stepHeight = height / totalStep; //
		
		int stepWidth2 = width / totalStep; // 
		int stepHeight2 = 0; //
		int stepWidth3 = 0; // 
		int stepHeight3 = height / totalStep; //
		
		int minWidth = 0,
			minHeight = 0,
			maxWidth = width,
			maxHeight = height;
		
		// 
		for (loopCounter = 0; loopCounter < totalStep; loopCounter++)
		{
			// draw line
			g.drawLine(minWidth, minHeight + stepHeight2, minWidth + stepWidth2, maxHeight); // from top-left
			g.drawLine(maxWidth, maxHeight - stepHeight2, maxWidth - stepWidth2, minHeight); // from bottom-right
			stepWidth2 += stepWidth;
			stepHeight2 += stepHeight;
			g.drawLine(maxWidth - stepWidth3, minHeight, minWidth, minHeight + stepHeight3); // from top-right
			g.drawLine(minWidth + stepWidth3, maxHeight, maxWidth, maxHeight - stepHeight3); // from bottom-left
			stepWidth3 += stepWidth;
			stepHeight3 += stepHeight;
			
		} // end for
	} // end paintComponent
} // end class
