#include<stdio.h>

int Product(int ino)
{
	static int iProd = 1;
	int iDigit = 0;
	if(ino!=0)
	{
		iDigit = ino % 10;
		if(iDigit % 2 == 0)
		{
			iProd = iProd * iDigit;
		}
		ino = ino/10;
		Product(ino);
	}
	return iProd;
}

int main(int argc, char const *argv[])
{
	int iret = 0;

	iret = Product(67832);
	printf("%d\n",iret );
	return 0;
}