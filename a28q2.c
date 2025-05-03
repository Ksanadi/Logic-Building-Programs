#include<stdio.h>

int WordCount(char *str)
{
	int icnt=0,icnt1=0,i=0,j=0,iMax=0;

	if(str==NULL)
	{
		return -1;
	}

	while(*str!='\0')
	{
		if(*str==' ')
		{
			while((*str==' ')&&(*str!='\0'))
			{
				str++;
			}
		}
		else
		{
			while((*str!=' ')&&(*str!='\0'))
			{
				icnt++;
				str++;
			}
			if(icnt>iMax)
			{
				iMax=icnt;
			}
			icnt=0;
		}
	}
	return iMax;
}

int main()
{
	char arr[50]="  jskasjdgh jds ljsd ";
	int iret=0;

	iret=WordCount(arr);

	printf("%d\n",iret );
}