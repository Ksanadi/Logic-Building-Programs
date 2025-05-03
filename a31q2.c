#include<stdio.h>

typedef unsigned int UINT;

UINT ChkBit(UINT ino,UINT ipos)
{
	UINT imask=1,ires=0;

	if((ipos<1)||(ipos>32))
	{
		return -1;
	}

	imask=imask<<(ipos-1);

	ires=imask ^ ino;

	return ires ;

}

int main()
{
	UINT bret=0;

	bret=ChkBit(10,4);

	printf("%d\n",bret );
	
}