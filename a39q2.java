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

		setSize(400,500);

		setVisible(true);

		Hello hobj = new Hello();
		addWindowListener(hobj);
	}

	public void actionPerformed(ActionEvent e)
	{
			String str = e.getActionCommand();

			if(str.equals("Go"))
			{
				JOptionPane.showMessageDialog(b,"Good Morning");
			}
	}
}

class Hello extends WindowAdapter
{
	public void windowClosing(WindowEvent e)
	{
		System.exit(0);
	}
}
class a39q2
{
	public static void main(String[] args) 
	{
		Class obj = new Class();
	}
}