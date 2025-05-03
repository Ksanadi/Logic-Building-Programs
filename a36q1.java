import java.io.*;

public class a36q1						//a36q1		opens file in read mode
{
	public static void main(String[] args) 
	{
		File file = new File("C:\\Users\\dilip\\Desktop\\MARVELLOUS\\LB-C\\a.txt");

		BufferedInputStream b = null;
		FileInputStream f = null;

		try
		{
			f = new FileInputStream(file);

			b = new BufferedInputStream(f);

			if(b.available() > 0)
			{
				System.out.println("File opened successfully");
			}
		}
		catch (Exception e)
		{
			System.out.println(e);
		}
	}
}