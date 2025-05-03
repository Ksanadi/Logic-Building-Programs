#include<stdio.h>

void StrRevX(char *str)
{
	int icnt=0,i=0,j=0,istart=0,iend=0;
	char temp;

	if(str==NULL)
	{
		return;
	}

	while(*str!='\0')
	{
		icnt++;
		str++;
	}
	str=str-icnt;
	
	for(i=0;i<icnt;i++)
	{
		if(str[i]==' ')
		{
			for(j=i;((j<icnt)&&(str[j]==' '));j++)
			{}
			i=j-1;
		}
		else if(str[i]!=' ')
		{
			for(j=i;((j<icnt)&&(str[j]!=' '));j++)
			{}
			istart = i;
			iend = j-1;
			while(istart<iend)
			{
				temp = str[istart];
				str[istart]=str[iend];
				str[iend]=temp;
				istart++;
				iend--;
			}
						
			i=j-1;
		}
	}
}

int main()
{
	char arr[30]="Marvellous Multi";

	StrRevX(arr);

	printf("%s\n",arr );
}