#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*dest=*src;
			dest++;
		}
		src++;
	}
}

int main()
{
	char arr[30]="Marvellous multi OS";
	char brr[30];

	StrCpyX(arr,brr);

	printf("%s\n",brr );
}