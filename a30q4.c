#include<stdio.h>

typedef unsigned int UINT;

UINT ChkBit(UINT ino)
{
	UINT imask=0X00000240,ires=0;

	ires=imask ^ ino;

	return ires ;

}

int main()
{
	UINT bret=0;

	bret=ChkBit(4095);

	printf("%d\n",bret );
	
}