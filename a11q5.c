#include<stdio.h>


void Pattern11_5(int irow,int icol)
{
	int icnt1=0,icnt2=0,inum1=0;
	
	for(icnt1=1;icnt1<=irow;icnt1++)
	{
		inum1=icnt1;
		for(icnt2=1;icnt2<=icol;icnt2++)
		{
			
			printf("%d\t",inum1++);
		}
    	printf("\n");
	}
}
		


int main()
{
	int row=0,col=0;

	printf("Enter rows and cols:\n");
	scanf("%d %d",&row,&col);

	Pattern11_5(row,col);
	return 0;
}