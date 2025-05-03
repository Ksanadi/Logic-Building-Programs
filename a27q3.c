#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

BOOL StrCpyX(char *src,char *dest,int icnt)
{
	int j=0;

	if((src==NULL)||(dest==NULL))
	{
		return FALSE;
	}

	for (int i = 0; dest[i] != '\0'; ++i)
	{
		j++;/* code */
	}

	if(icnt>j)
	{
		while(*src!='\0')
		{
			src++;
		}
	
		while((*dest!='\0')&&(icnt!=0))
		{
			*src=*dest;
			src++;
			dest++;
			icnt--;
		}

		*dest='\0';
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

	bret=StrCpyX(arr,brr,100);

	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}

	printf("%s\n",arr );
}