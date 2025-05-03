#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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
	char ch='\0';
	BOOL bret=FALSE;

	printf("Enter character\n");
	scanf("%c",&ch);

	bret=ChkAlpha(ch);

	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}