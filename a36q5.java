import java.io.File;
import java.io.FileWriter;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.PrintWriter;   

public class a36q5						//accept name and one string  and write that string at the end of file
{
	public static void main(String [] args)
	{
		try
		{
			File file = new File("a.txt");
			String str = "abc";

			BufferedWriter out = new BufferedWriter(new FileWriter(file,true));
			out.write(str);
			out.close();

			System.out.println("Written");
		}
		catch (IOException e)
		{
			System.out.println("Exception");
			e.printStackTrace();
		}
	}
}