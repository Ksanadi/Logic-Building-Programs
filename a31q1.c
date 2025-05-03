#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT ino,UINT ipos)
{
	UINT imask=1,ires=0;

	if((ipos<1)||(ipos>32))
	{
		return FALSE;
	}

	imask=imask<<(ipos-1);

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
	UINT bret=0;

	bret=ChkBit(16,2);

	printf("%d\n",bret );
	
}