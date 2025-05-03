import java.io.BufferedReader;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class a36q3				//display contents of the file 
{
	public static void main(String[] args) 
	{
		BufferedReader br = null;

		try
		{
			br = new BufferedReader(new FileReader("a.txt"));

			int num = 0;
			char ch;
			while((num = br.read())!=-1)
			{
				ch = (char)num;
				System.out.print(ch);
			}
		}
		catch (IOException ioe)
		{
			ioe.printStackTrace();
		}
	}
}