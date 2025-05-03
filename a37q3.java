import java.io.File;
import java.io.*;

public class a37q3
{
	public static void main(String[] args) 
	{
		File file = new File("C:\\Users\\dilip\\Desktop\\MARVELLOUS\\LB-C");
		File[] files =  file.listFiles();

		for (File f : files ) 
		{
			System.out.println(f.getName());
		}
	}
}