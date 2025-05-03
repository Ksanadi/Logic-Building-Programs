#include<stdio.h>
#include<stdlib.h>

void Inc(int arr[],int size)
{
	int istart=0,iend=0,temp=0,idig=0,rev=0,i=0;

	if((arr==NULL)||(size<1))
	{
		return ;
	}

	for(i=0;i<size;i++)
	{
		temp=arr[i];
		rev=0;
		while(temp!=0)
		{
			idig=temp%10;
			rev=rev*10+idig;
			temp=temp/10;
		}

		printf("%d\n", rev);
	}
}

int main()
{
	int ilength =0,i=0;
	int *p=NULL;

	printf("Enter no of elements\n");
	scanf("%d",&ilength);

	p=(int *)malloc(ilength*sizeof(int));

	if(p==NULL)
	{
		printf("unable to locate memory\n");
		return -1;
	}

	printf("Enter %d elements\n", ilength);

	for (i = 0; i < ilength; ++i)
	{
		printf("Enter element: %d\n",i+1 );
		scanf("%d",&p[i]);
	}

	Inc(p,ilength);

	free(p);
	return 0;
}