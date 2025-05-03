import java.io.*;
import java.util.Scanner;

class a38q2
{
	public static void main(String[] args) throws Exception
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter file name");
		String name = sobj.nextLine();

		System.out.println("Enter charcter");
		String sch = sobj.next();

		FileInputStream fobj;
		fobj = new FileInputStream(name);

		int i = 0;
		int icnt=0;
		char cch = sch.charAt(0);

		while((i = fobj.read())!=-1)
		{
			if(((char)i)==cch)
			{
				icnt++;
			}
		}

		System.out.println(icnt);
	}
}