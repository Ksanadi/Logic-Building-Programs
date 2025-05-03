#include<stdio.h>

void Pattern15_1(int ino)
{
	int temp = ino,ino2=0,i=0,j=0,icnt=0,idig=0 , temp2=0,irev=0;

	while(temp!=0)
	{
		temp=temp/10;
		icnt++;
	}

	while(ino>0)
	{
		idig=ino%10;
		irev=irev*10+idig;
		ino=ino/10;
	}

	temp2=irev;

	for(i=icnt;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			idig=irev%10;
			printf("%d\t",idig);
			irev=irev/10;
		}
		printf("\n");
		irev=temp2;

	}
	
}

int main()
{
	Pattern15_1(5473);
	return 0;
}