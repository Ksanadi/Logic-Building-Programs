import java.io.*;
import java.util.Scanner;

class a37q1
{
	public static void main(String[] args) throws Exception
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter source file1 name");
		String file1 = sobj.nextLine();

		System.out.println("Enter source file2 name");
		String file2 = sobj.nextLine();

		FileInputStream fiobj1;
		fiobj1 = new FileInputStream(file1);

		FileOutputStream foobj;
		foobj = new FileOutputStream(file2);

		byte[] buffer = new byte[1024];

		int length = 0;

		while((length = fiobj1.read(buffer)) > 0)
		{
			foobj.write(buffer,0,length);
		}
	}
}