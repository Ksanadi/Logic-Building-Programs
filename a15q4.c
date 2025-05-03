#include<stdio.h>

void Pattern15_4(int ino)
{
	int idig=0,icnt=0,itemp=0,i=0,j=0,irev=0,itemp2=ino,idig2=0;
	itemp=ino;

	while(ino!=0)
	{
		idig=ino%10;
		irev=irev*10+idig;
		ino=ino/10;
		icnt++;
	}
	printf("%d\n",irev );
	itemp2=irev;
	for(i=1;i<=icnt;i++)
	{	
		for(j=1;j<=icnt;j++)
		{
			if((i==icnt)||(j==icnt)||(i==1)||(j==1))
			{
				idig=irev%10;
				printf("%d\t",idig );
				irev=irev/10;
			}
			else
			{
				printf("0\t");
				irev=irev/10;
			}
		}
		printf("\n");
		irev=itemp2;
	}
	
}

int main()
{
	Pattern15_4(5473);
	return 0;
}