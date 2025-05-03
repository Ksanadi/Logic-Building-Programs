#include <stdio.h>

int DigitMax(int ino)
{
	if(ino<0)
	{
		ino = -ino;
	}

	int idigit=0,imul = 1;

	while(ino>0)
	{
		idigit = ino % 10;
		if(idigit % 2 == 0)
		{
			if(idigit == 0)
			{
				idigit = 1;
			}
			imul = imul * idigit;
		}
		ino = ino/10;
	}

	return imul;
}


int main()
{
	int iret=0;

	iret=DigitMax(675767270);

	printf("%d\n",iret);
	return 0;
}