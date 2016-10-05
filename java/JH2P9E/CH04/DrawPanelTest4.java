// fig  DrawpPanelTest4.java
// application to display a DrawPanel

import javax.swing.JFrame;

public class DrawPanelTest4
{
	public static void main(String[] args)
	{
		// create a panel that contains our drawing
		DrawPanel4 panel = new DrawPanel4();
		
		// create a new frame to hold the panel
		JFrame application = new JFrame();
		
		// set the frame to exit when it is closed 
		application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		application.add(panel); // add the panel to the frame
		application.setSize(250, 250); // set the size of the frame
		application.setVisible(true); // make the frame visible
	} // end main
} // end class
