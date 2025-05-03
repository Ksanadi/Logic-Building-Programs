import java.awt.*;
import java.awt.event.*;

class Class extends Frame
{
	public Class()
	{
		Frame fobj = new Frame();
		fobj.setSize(300,400);

		fobj.setVisible(true);

		Hello hobj = new Hello();
		fobj.addWindowListener(hobj);
	}
}

class Hello extends WindowAdapter
{
	public void windowClosing(WindowEvent e)
	{
		System.exit(0);
	}
}
class a39q1
{
	public static void main(String[] args) 
	{
		Class obj = new Class();
	}
}