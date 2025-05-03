#include<stdio.h>

void Pattern14_1(int irow,int icol)
{
	printf("\n");
	int i=0,j=0;

	if(irow!=icol)
	{
		return;
	}

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			if(i+j==icol+1)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
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

	Pattern14_1(row,col);
	return 0;
}