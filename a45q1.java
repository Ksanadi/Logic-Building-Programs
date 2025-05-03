import java.io.*;

class a45q1
{
	int maxDiff(int arr[],int arr_size)
	{
		int max_diff = arr[1]-arr[0];
		int i=0,j=0;

		for (i=0;i<arr_size;i++) 
		{
			for (j=i+1;j<arr_size;j++ ) 
			{
				if (arr[j]-arr[i]>max_diff) 
				{
					max_diff = arr[j]-arr[i];
				}
			}
		}
		return max_diff;
	}

	public static void main(String[] args) 
	{
		a45q1 maxdiff = new a45q1();
		int arr[] = {1,2,90,10,110};
		System.out.println("Max difference is "+maxdiff.maxDiff(arr,5));

	}
}