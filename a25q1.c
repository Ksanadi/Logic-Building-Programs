#include<stdio.h>

void DiplayASCII()
{
	int i=0;

	for ( i = 0; i < 256; ++i)
	{
		printf("%c : %d : %x : %o\n",i,i,i,i );
	}
}

int main()
{
	DiplayASCII();
	return 0;	
}