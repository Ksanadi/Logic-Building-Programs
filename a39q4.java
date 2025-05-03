import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Class extends Frame implements ActionListener
{
	Button b;

	public Class()
	{
		b = new Button("Go");

		add(b);

		b.addActionListener(this);

		FlowLayout fobj = new FlowLayout();
		setLayout(fobj);

		setSize(1500,750);

		setVisible(true);

		Hello hobj = new Hello();
		addWindowListener(hobj);
	}

	public void actionPerformed(ActionEvent e)
	{
		Frame nobj = new Frame();
		nobj.setSize(375,750);
		nobj.setVisible(true);

		Hello hobj1 = new Hello();
		nobj.addWindowListener(hobj1);
	}
}

class Hello extends WindowAdapter
{
	public void windowClosing(WindowEvent e)
	{
		System.exit(0);
	}
}
class a39q4
{
	public static void main(String[] args) 
	{
		Class obj = new Class();
	}
}