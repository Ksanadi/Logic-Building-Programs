#include<stdio.h>

int Reverse(int ino)
{
	static int irev = 0;

	if(ino!=0)
	{
		irev = irev * 10 + (ino%10);
		ino = ino/10;
		Reverse(ino);
	}
	return irev;
}

int main()
{
	int iret = Reverse(786);
	printf("%d\n",iret );
}