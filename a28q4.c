#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		if(*src==' ')
		{
			src++;
		}
		else if((*src!=' '))
		{
			*dest=*src;
			dest++;
			src++;			
		}
	}
}

int main()
{
	char arr[30]="Marvellous Multi OS";
	char brr[30]={0};

	StrCpyX(arr,brr);

	printf("%s\n",brr );
}