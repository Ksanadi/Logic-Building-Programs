#include<stdio.h>

void Pattern9_1(int irow,int icol)

{
	int icnt1 =0,icnt2=0;

	for(icnt1=1;icnt1<=irow;icnt1++)
	{
	  
		for(icnt2=1;icnt2<=icol;icnt2++)
		{
			if(icnt2%2!=0)
			{
				printf("*\t");
		    }
		    else
	  		{
				printf("#\t");
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

	Pattern9_1(row,col);
	return 0;
}