// fig  DrawpPanelTest6.java
// application to display a DrawPanel

import javax.swing.JFrame;

public class DrawPanelTest6
{
	public static void main(String[] args)
	{
		// create a panel that contains our drawing
		DrawPanel6 panel = new DrawPanel6();
		
		// create a new frame to hold the panel
		JFrame application = new JFrame();
		
		// set the frame to exit when it is closed 
		application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		application.add(panel); // add the panel to the frame
		application.setSize(500, 500); // set the size of the frame
		application.setVisible(true); // make the frame visible
	} // end main
} // end class
