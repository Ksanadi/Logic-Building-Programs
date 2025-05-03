#include<stdio.h>

int Reverse(int ino)
{
	if(ino<0)
	{
		ino = -ino;
	}

	int irev = 0,idigit = 0 , idigit1 = ino % 10;

	while(ino>0)
	{
		idigit = ino % 10;
		if(idigit1 <= idigit)
		{
			irev = irev * 10 + idigit;
		}
		ino = ino/10;
	}

	return irev;
}

int main()
{
	int iret = Reverse(507);
	printf("%d\n", iret);
}