#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT ino,UINT ipos)
{
	UINT imask1=1,ires=0;
	int i=0;

	for (i = 1; i < ipos; ++i)
	{
		imask1=imask1*2;
	}
	printf("%d\n",imask1 );

	

	ires=imask1 & ino;

	if(ires==imask1)
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

	bret=ChkBit(64,7);
	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}