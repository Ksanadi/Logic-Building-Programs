#include<stdio.h>

int Max(int ino)
{
	int idig=0;
	static int imax=0;
	if(ino!=0)
	{
		idig=ino%10;
		if(idig>imax)
		{
			imax=idig;
		}
		ino = ino/10;
		Max(ino);
	}
	return imax;
}

int main()
{
	int iret = Max(7849);
	printf("%d\n",iret );
}