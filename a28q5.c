#include<stdio.h>

void StrCpyX(char src[])
{
	int i=0;

	if(src==NULL)
	{
		return;
	}

	for(i=0;src[i]!='\0';i++)
	{

		if(i==0)
		{
		 	if((src[i]>='a')&&(src[i])<='z')
		 	{
		 		src[i]=src[i]-32;
		 	}
		}

		if (src[i]==' ')
		{
		 	i++;

		 	if(src[i]>='a'&& src[i]<='z')
		 	{
		 		src[i]=src[i]-32;
		 	}
		}
	}
}

int main()
{
	char arr[30]="marvellous multi OS";

	StrCpyX(arr);

	printf("\n%s\n",arr);
}
