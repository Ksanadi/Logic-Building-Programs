#include<stdio.h>

void StrRevX(char *str)
{
	if(str==NULL)
	{
		return;
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
		temp=*first;
		*first=*last;
		*last=temp;
		first++;
		last--;
	}
}

int main()
{
	char arr[50]="Marvellous";

	StrRevX(arr);

	printf("%s",arr );
}