#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

void ChkAlpha(char ch)
{
	if((ch=='A')||(ch=='a'))
	{
		printf("7 am\n");
	}
	else if	((ch=='B')||(ch=='b'))
	{
		printf("8 am\n");
	}
	else if	((ch=='C')||(ch=='c'))
	{
		printf("9 am\n");
	}
	else if	((ch=='D')||(ch=='d'))
	{
		printf("10 am\n");
	}
	else
	{
		printf("invalid\n");
	}
}

int main()
{
	char ch='\0';
	BOOL bret=FALSE;

	printf("Enter character\n");
	scanf("%c",&ch);

	ChkAlpha(ch);

	return 0;
}