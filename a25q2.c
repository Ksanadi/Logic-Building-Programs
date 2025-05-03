#include<stdio.h>

void SwapX(char *p,char *q)
{
	char temp='\0';

	if((*p>='A')&&(*q<='Z')||(*p>='a')&&(*q<='z'))
	{
		temp=*p;
		*p=*q;
		*q=temp;

		printf("%c %c\n",*p,*q );
	}
	else
	{
		printf("%c %c\n",*p,*q );
	}
}

int main()
{
	char ch1='\0',ch2='\0';

	printf("Enter characters\n");
	scanf("%c %c",&ch1,&ch2);

	SwapX(&ch1,&ch2);

	return 0;
}