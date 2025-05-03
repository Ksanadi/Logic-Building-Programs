#include<stdio.h>

void Pattern(int ino)
{
	static int i = 1;
	if(ino>0)
	{
		printf("\n");
		DisplayI(ino);
		ino--;
		Pattern(ino);
		DisplayO(ino);
	}
}

void DisplayI(int ival)
{
	static int i = 1;
	if(i<=ival)
	{
		printf("%d\t",i );
		i++;
		DisplayI(ival);
		i=1;
	}
}

void DisplayO(int ival)
{
	static int i = 1;
	int temp = ival;
	if(i<=temp)
	{
		printf("%d\n",ival);
		i++;
		ival--;
		DisplayO(temp);
	}
}

int main()
{
	Pattern(4);
	return 0;
}