import java.io.File;
import java.io.*;

public class a37q5
{
	public static void main(String[] args) throws Exception
	{
		File file1 = new File("C:\\Users\\dilip\\Desktop\\MARVELLOUS\\LB-C\\c.txt");
		BufferedWriter out = new BufferedWriter(new FileWriter(file1,true));


		File file2 = new File("C:\\Users\\dilip\\Desktop\\MARVELLOUS\\LB-C");
		File[] files =  file2.listFiles();

		for (File f : files ) 
		{
			out.write(f.getName());
		}
	}
}