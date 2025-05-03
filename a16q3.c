#include <stdio.h>
#include<stdlib.h>

void Reverse(int arr[],int isize)
{
	int istart=0,iend=isize-1,temp=0;

	for(istart=0,iend=isize-1;istart<iend;istart++,iend--)
	{
		temp=arr[istart];
		arr[istart]=arr[iend];	
		arr[iend]=temp;
	}
	return;
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

	for ( i = 0; i < ilength; ++i)
	{
		printf("Enter element: %d\n",i+1 );
		scanf("%d",&p[i]);
	}

	Reverse(p,ilength);

	printf("elements after reverse call:\n");
	for ( i = 0; i < ilength; ++i)
	{
		printf("%d\t",p[i] );
	}

	free(p);
	return 0;
}