#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned long long int UINT;
typedef int BOOL;

BOOL ChkBit(UINT ino)
{
	UINT ires=0,imask3=0xf000000f;

	ires=imask3 & ino;

	if(ires==imask3)
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

	bret=ChkBit(4026531855);
	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}