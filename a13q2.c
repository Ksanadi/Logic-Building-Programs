#include<stdio.h>

void Pattern13_2(int irow,int icol)
{
	printf("\n");
	int i=0,j=0;
	if(irow!=icol)
	{
		return;
	}

	for(i=irow;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

int main()
{
	int row=0,col=0;

	printf("Enter rows and cols:\n");
	scanf("%d %d",&row,&col);

	Pattern13_2(row,col);
	return 0;
}