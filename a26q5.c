#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

	while(*src!='\0')
	{
		src++;
	}
	
	while(*dest!='\0')
	{
		*src=*dest;
		src++;
		dest++;
	}

	*dest='\0';
}

int main()
{
	char arr[50]="Marvellous Infosystems";
	char brr[30]="Logic Building";

	StrCpyX(arr,brr);

	printf(" %s \n",arr );
}