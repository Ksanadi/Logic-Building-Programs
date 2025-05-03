#include<stdio.h>

int Max(int arr[],int isize)
{
	static int iMax = 0, i = 0;

	if(i < isize)
	{
		if(arr[i] > iMax)
		{
			iMax = arr[i];
		}
		i++;
		Max(arr,isize);
	}
	return iMax;
}

int main(int argc, char const *argv[])
{
	int arr[] = {32,42,35,56};

	int iret = Max(arr,4);
	printf("%d\n",iret );
	return 0;
}