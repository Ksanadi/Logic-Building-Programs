#include<stdio.h>

void Pattern15_1(int ino)
{
	int temp = ino,i=0,j=0,icnt=0,idig=0,temp2=0,irev=0;

	
	while(ino>0)
	{
		idig=ino%10;
		irev=irev*10+idig;
		ino=ino/10;
		icnt++;
	}

	temp2=irev;
	for(i=1;i<=icnt;i++)
	{
		for(j=1;j<=icnt;j++)
		{
			if(i>j)
			{
				printf(" \t");			
			}
			else
			{
					idig=irev%10;
					printf("%d\t",idig);
					irev=irev/10;
			}
		}
		printf("\n");
		temp2=temp2/10;
		irev=temp2;

	}
	
}

int main()
{
	Pattern15_1(5473);
	return 0;
}