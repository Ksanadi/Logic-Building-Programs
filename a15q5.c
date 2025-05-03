#include<stdio.h>

void Pattern15_1(int ino)
{
	int idig=0,icnt=0,itemp=0,i=0,j=0,irev=0,itemp2=ino,idig2=0;
	itemp=ino;

	while(ino!=0)
	{
		ino=ino/10;
		icnt++;
	}

	for(i=1;i<=icnt;i++)
	{
		itemp=itemp2;
		for(j=0;j<icnt;j++)
		{
			if((i%2)==0)
			{
				printf("0\t");
			}
			else
			{
				while(itemp>0)
				{
					idig2=itemp%10;
					printf("%d\t",idig2 );
					itemp=itemp/10;
				}
			}
		}
		printf("\n");
	}
	
}

int main()
{
	Pattern15_1(5473);
	return 0;
}