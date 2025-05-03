#include<stdio.h>

void StrCpyX(char *src,char *dest,int icnt)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

	while((*src!='\0')&&(0!=icnt))
	{
		*dest=*src;
		src++;
		dest++;
		icnt--;
	}
}

int main()
{
	char arr[30]="Marvellous Multi Os";
	char brr[30];

	StrCpyX(arr,brr,50);

	printf("%s\n",brr );
}