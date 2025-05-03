#include<stdio.h>

typedef unsigned int UINT;

UINT ChkBit(UINT ino)
{
	UINT imask=0X0000000F,ires=0;

	ires=imask ^ ino;

	return ires ;

}

int main()
{
	UINT bret=0;

	bret=ChkBit(16);

	printf("%d\n",bret );
	
}