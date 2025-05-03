#include<stdio.h>

void Pattern12_5(int irow,int icol)
{
	printf("\n");
	int i=0,j=0;

	for(i=1;i<=irow;i++)
	{
		for(j=1;j<=icol;j++)
		{
			if((j==1)||(j==icol)||(i==1)||(i==irow))
			{
				printf("%d\t",j);
			}
			else
			{
				printf("@\t");
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

	Pattern12_5(row,col);
	return 0;
}