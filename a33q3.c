#include<stdio.h>

int Sum(int arr[],int isize)
{
	static int isum = 0, i = 0;

	if(i<isize)
	{
		isum = isum + arr[i];
		i++;
		Sum(arr,isize);
	}
	 return isum;
}

int main()
{
	int arr[]={31,2,3,12};

	int iret = Sum(arr,4);
	printf("%d\n",iret );
	return 0;
}