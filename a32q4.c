#include<stdio.h>

int Fact(int ino)
{
	static int i = 1;
	static int fact = 1;
	if(i<=ino)
	{
		fact = fact  * i;
		i++;
		Fact(ino);
	}
	return fact;
}

int main()
{
	int iret = Fact(5);
	printf("%d\n",iret );
}