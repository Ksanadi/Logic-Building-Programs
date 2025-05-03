#include<stdio.h>


void Pattern11_1(int irow,int icol)
{
	int icnt1=0,icnt2=0,inum1=1,inum2=1;
	
	for(icnt1=1;icnt1<=irow;icnt1++)
	{
		if((icnt1%2)!=0)
		{
			for(icnt2=1;icnt2<=icol;icnt2++)
			{
				printf("%d\t",inum1*2 );
				inum1++;
			}
			inum1=1;
			printf("\n");
		}
		else
		{
			for(icnt2=1;icnt2<=icol;icnt2++)
			{
				printf("%d\t",inum2);
				inum2=inum2+2;
	    	}
	    	inum2=1;
	    	printf("\n");
	    }
	}
		
}


int main()
{
	int row=0,col=0;

	printf("Enter rows and cols:\n");
	scanf("%d %d",&row,&col);

	Pattern11_1(row,col);
	return 0;
}