import java.io.*;
import java.util.Scanner;

class a38q3
{
	public static void main(String[] args) throws Exception
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter source file name");
		String src = sobj.nextLine();

		System.out.println("Enter destination file name");
		String dest = sobj.nextLine();

		FileInputStream fiobj;
		FileOutputStream foobj;

		fiobj = new FileInputStream(src);
		foobj = new FileOutputStream(dest);


		File fobj1 = new File(src);
		File fobj2 = new File(dest);

		byte[] buffer = new byte[1024];

		int length = 0;

		while((length = fiobj.read(buffer)) > 0)
		{
			foobj.write(buffer,0,2);
		}
	}
}