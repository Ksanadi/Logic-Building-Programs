#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

BOOL StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return FALSE;
	}

	while((*src!='\0')&&(*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}
		src++;
		dest++;
	}

	if(*src==*dest)
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
	BOOL bret=TRUE;
	char arr[30]="Marvellous Multi Os";
	char brr[30]="Marvellous Multi Os";

	bret=StrCpyX(arr,brr);

	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
}