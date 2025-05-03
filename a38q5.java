import java.io.*;
import java.util.Scanner;

class a38q5
{
	public static void main(String[] args) throws Exception
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter source file1 name");
		String file1 = sobj.nextLine();

		System.out.println("Enter source file2 name");
		String file2 = sobj.nextLine();


		System.out.println("Enter source file3 name");
		String file3 = sobj.nextLine();

		System.out.println("Enter destination file name");
		String dest = sobj.nextLine();

		FileInputStream fiobj1;
		FileInputStream fiobj2;
		FileInputStream fiobj3;
		FileOutputStream foobj;

		fiobj1 = new FileInputStream(file1);
		fiobj2 = new FileInputStream(file2);
		fiobj3 = new FileInputStream(file3);
		foobj = new FileOutputStream(dest);

		byte[] buffer = new byte[1024];

		int length = 0;

		while((length = fiobj1.read(buffer)) > 0)
		{
			foobj.write(buffer,0,length);
		}

		while((length = fiobj2.read(buffer)) > 0)
		{
			foobj.write(buffer,0,length);
		}

		while((length = fiobj3.read(buffer)) > 0)
		{
			foobj.write(buffer,0,length);
		}
	}
}