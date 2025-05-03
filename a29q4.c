#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT ino)
{
	UINT imask=0x08104040,ires=0;

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

	bret=ChkBit(135282752);
	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}