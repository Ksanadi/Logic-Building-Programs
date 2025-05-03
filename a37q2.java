import java.io.*;
import java.util.Scanner;

class a37q2
{
	public static void main(String[] args) throws Exception
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter file name");
		String name = sobj.nextLine();

		System.out.println("Enter the string");
		String data = sobj.nextLine();

		FileOutputStream foobj = new FileOutputStream(name);

		byte arr[] = data.getBytes();

		foobj.write(arr);

		foobj.close();
	}
}