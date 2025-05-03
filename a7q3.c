#include <stdio.h>

int DigitMax(int ino)
{
	int idigit=0,imax=0,arr[10]={0},i=0,temp=0;
	if(ino<0)
	{
		ino=-ino;
	}

	temp=ino;
	while(temp>0)
	{
		idigit=temp%10;
		arr[idigit]++;
		temp=temp/10;
	}
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>imax)
		{
			imax=i;
		}
	}
	return imax;
}

int main()
{
	int iret=0;

	iret=DigitMax(67576727);

	printf("%d\n",iret);
	return 0;
}