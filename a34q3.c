#include<stdio.h>

void Digits(int arr[],int isize)
{
	static int i = 0;
	if(i<isize)
	{
		Count(arr,i);
		i++;
		Digits(arr,isize);
	}
}

void Count(int arr[],int i)
{
	static int icnt = 0;
	if(arr[i]!=0)
	{
		icnt++;
		arr[i]=arr[i]/10;
		Count(arr,i);
	}
	printf("%d\n",icnt );
	icnt = 0;
}

int main(int argc, char const *argv[])
{
	int arr[] = {333,22,4345,3};
	Digits(arr,4);
	return 0;
}