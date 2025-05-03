#include<stdio.h>

void StrCpyX(char *src,char *dest,int icnt)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

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

int main()
{
	char arr[50]="Marvellous Infosystems";
	char brr[30]="Logic Building";

	StrCpyX(arr,brr,5);

	printf(" %s \n",arr );
}