#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

BOOL StrRevX(char *str)
{
	if(str==NULL)
	{
		return FALSE;
	}

	char temp;
	char *first=str,*last=str;

	while(*last!='\0')
	{
		last++;
	}
	last--;

	while(first<=last)
	{
		if((*first!=*last)&&(*first!=*last+32)&&(*first!=*last-32))
		{
			break;
		}
		first++;
		last--;
	}

	if(first>last)
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
	char arr[50]="aAbCcBaa";
	BOOL bret=FALSE;

	bret=StrRevX(arr);

	if(bret==TRUE)
	{
		printf("pal\n");
	}
	else
	{
		printf("not\n");
	}

	printf("%s",arr );
}