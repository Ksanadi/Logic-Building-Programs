#include<stdio.h>

void Pattern13_5(int irow,int icol)
{
	printf("\n");
	int i=0,j=0;

	if(irow!=icol)
	{
		return;
	}

	for(i=irow;i>=1;i--)
	{
		for(j=icol;j>=1;j--)
		{
			if(i>=j)
			{
				printf("%d\t",j);
			}
			
		}
		printf("\n");
	}
}

int main()
{
	int row=0,col=0;

	printf("Enter rows and cols:\n");
	scanf("%d %d",&row,&col);

	Pattern13_5(row,col);
	return 0;
}