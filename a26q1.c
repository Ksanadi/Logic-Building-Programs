#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
}

int main()
{
	char arr[30]="Marvellous Multi Os";
	char brr[30];

	StrCpyX(arr,brr);

	printf("%s\n",brr );
}