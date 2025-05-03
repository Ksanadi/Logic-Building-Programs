#include<stdio.h>

void Pattern(int ino)
{
	static int i = 1;
	if(i<=ino)
	{
		printf("\n");
		Display(ino);
		i++;
		Pattern(ino);
	}
}

void Display(int ival)
{
	static int i = 1;
	if(i<=ival)
	{
		printf("%d\t",i );
		i++;
		Display(ival);
		i=1;
	}
}
/*void Pattern(int ino)
{
	int i = 0,j=0;
	for ( i = ino; i > 0; i--)
	{
		for(j=1;j<=ino;j++)
		{
			printf("%d\t",j );
		}
		printf("\n");
	}
}*/

/*void Pattern(int ino)
{
	int i = ino,j = 0;
	while(i>0)
	{
		j=1;
		while(j<=ino)
		{
			printf("%d\t",j );
			j++;
		}
		printf("\n" );
		i--;
	}
}*/

int main()
{
	Pattern(4);
	return 0;
}