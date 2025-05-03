#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT ino)
{
	UINT imask1=1,imask2=1,imask=0,ires=0;
	int i=0;

	for ( i = 1; i < 9; ++i)
	{
		imask1=imask1*2;
	}
	printf("%d\n",imask1 );

	for ( i = 1; i < 18; ++i)
	{
		imask2=imask2*2;
	}
	printf("%d\n",imask2 );

	imask=imask2+imask1;

	ires=imask & ino;

	if(ires==imask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	BOOL bret=0;

	bret=ChkBit(131328);
	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}