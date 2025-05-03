import java.io.*;
import java.util.Scanner;

class a38q1
{
	public static void main(String[] args) throws Exception
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter source file name");
		String src = sobj.nextLine();

		System.out.println("Enter destination file name");
		String dest = sobj.nextLine();


		FileInputStream fobj1;
		fobj1 = new FileInputStream(src);


		FileInputStream fobj2;
		fobj2 = new FileInputStream(dest);

		File fiobj = new File(src);
		File foobj = new File(dest);

		long size1 = fiobj.length();
		long size2 = foobj.length();

		int i=0;

		if(size1!=size2)
		{
			System.out.println("not same");
		}
		else
		{
			for ( i = 1; i<=size1 ; i++ ) 
			{
				if((fobj1.read())!=(fobj2.read()))
				{
					break;
				}
			}

			if(i>size1)
			{
				System.out.println("they are same");
			}
			else
			{
				System.out.println("they are not same");
			}
		}
	}
}