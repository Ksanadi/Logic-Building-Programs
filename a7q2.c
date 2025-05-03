#include<stdio.h>

int Reverse(int ino)
{
	if(ino<0)
	{
		ino = -ino;
	}

	int irev = 0,itemp = ino;

	while(ino>0)
	{
		irev = irev * 10 + (ino%10);
		ino = ino/10;
	}

	if(itemp == irev)
		return 1;
	else
		return 0;
}

int main()
{
	int iret = Reverse(505);
	printf("%d\n", iret);
}