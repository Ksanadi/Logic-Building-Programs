#include<stdio.h>

int CountBit(int ino)
{
	static int icnt = 0;

	if(ino != 0)
	{
		icnt += (ino & 0x00000001);
		ino = ino >> 1;
		CountBit(ino);
	}
	return icnt;
}

int main(int argc, char const *argv[])
{
	int iret = CountBit(15);
	printf("%d\n", iret);
	return 0;
}