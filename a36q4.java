import java.io.File;

public class a36q4		//length of file is displayed
{
	public static void main(String[] args) 
	{
		File f = new File("a.txt");
		long size = f.length();

		System.out.println("File size is "+size);
	}
}