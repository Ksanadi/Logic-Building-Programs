#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT ino)
{
	UINT imask=1,ires=0;
	int i=0;

	for (int i = 1; i <= 15; ++i)
	{
		imask=imask*2;
	}

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

	bret=ChkBit(32768);
	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}