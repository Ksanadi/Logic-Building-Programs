#include<stdio.h>

void DiplayASCIIX(char ch)
{
		printf("%c : %d : %x : %o\n",ch,ch,ch,ch );
}

int main()
{
	char ch='\0';

	printf("Enter character\n");
	scanf("%c",&ch);

	DiplayASCIIX(ch);
	return 0;	
}