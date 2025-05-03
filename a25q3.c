#include<stdio.h>

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		for (int i = ch; i <= 'Z'; ++i)
		{
			printf("%c\t",i );
		}
	}
	else if((ch>='a')&&(ch<='z'))
	{
		for (int i = ch; i >= 'a'; i--)
		{
			printf("%c\t",i);
		}
	}
}

int main()
{
	char ch='\0';

	printf("Enter \n");
	scanf("%c",&ch);

	Display(ch);

	return 0;
}