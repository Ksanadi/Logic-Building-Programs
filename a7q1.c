#include<stdio.h>

int Reverse(int ino)
{
	if(ino<0)
	{
		ino = -ino;
	}

	int irev = 0;

	while(ino>0)
	{
		irev = irev * 10 + (ino%10);
		ino = ino/10;
	}

	return irev;
}

int main()
{
	int iret = Reverse(507);
	printf("%d\n", iret);
}