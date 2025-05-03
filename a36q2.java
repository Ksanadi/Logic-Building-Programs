import java.io.File;
import java.io.IOException;

public class a36q2
{
	public static void main(String[] args) 
	{
		try
		{
			File file = new File("aa.txt");

			boolean fvar = file.createNewFile();
			if(fvar)
			{
				System.out.println("File has been created ");
			}
			else
			{
				System.out.println("File already present");
			}
		}
		catch(IOException e)
		{
			System.out.println("Exception occurred");
			e.printStackTrace();
		}
	}
}