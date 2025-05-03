import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Class extends Frame implements ActionListener
{
	Button b;
	JTextField t;

	public Class()
	{
		b = new Button("Go");

		t = new JTextField("Enter text here");

		add(t);

		t.setBounds(50,100,200,30);

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
		
	}
}

class Hello extends WindowAdapter
{
	public void windowClosing(WindowEvent e)
	{
		System.exit(0);
	}
}
class a39q3
{
	public static void main(String[] args) 
	{
		Class obj = new Class();
	}
}