#include<stdio.h>

void Display(int ino)
{	
	static int i = 1;
	
	if(i<=ino)
	{
		printf("%d\n",ino );
		ino--;
		Display(ino);
	}
}

int main()
{
	int a=0;
	printf("Enter any number");
	scanf("%d",&a);
	Display(a);
}