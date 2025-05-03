#include<stdio.h>

int WordCount(char *str)		
{
	int icnt=0,icnt1=0,i=0,j=0;

	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		icnt1++;
		str++;
	}
	str=str-icnt1;
	for(i=0;i<icnt1;i++)
	{
		if(str[i]==' ')
		{
			for(j=i;((j<icnt1)&&(str[j]==' '));j++)
			{}
			i=j-1;
		}
		else if(str[i]!=' ')
		{
			icnt++;
			for(j=i;((j<icnt1)&&(str[j]!=' '));j++)
			{}
			i=j-1;
		}
	}

	return icnt;
}

int main()
{
	char arr[50]="Marvellous Multi OS Pune";
	int iret=0;

	iret=WordCount(arr);

	printf("%d\n",iret );
}