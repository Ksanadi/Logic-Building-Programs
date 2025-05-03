#include<stdio.h>
#include<stdlib.h>

void Inc(int arr[],int size,int brr[],int isize2)
{
	int i=0,isum1=0,isum2=0;

	if((arr==NULL)||(size<1)||(brr==NULL)||(isize2<1))
	{
		return;
	}

	for ( i = 0; i < size; i++)
	{
		 isum1=isum1+arr[i];
	}

	for ( i = 0; i < isize2; i++)
	{
		isum2=isum2+brr[i];
	}
	
	printf("%d\n",isum1 );
	printf("%d\n",isum2 );
}

int main()
{
	int ilength =0,i=0,ilength2=0;
	int *p=NULL;
	int *q=NULL;

	printf("Enter no of elements in first array\n");
	scanf("%d",&ilength);

	p=(int *)malloc(ilength*sizeof(int));

	if(p==NULL)
	{
		printf("unable to locate memory\n");
		return -1;
	}

	printf("Enter %d elements of first array\n", ilength);

	for (i = 0; i < ilength; ++i)
	{
		printf("Enter element: %d\n",i+1 );
		scanf("%d",&p[i]);
	}

	printf("Enter no of elements in second array\n");
	scanf("%d",&ilength2);

	q=(int *)malloc(ilength2*sizeof(int));

	if(q==NULL)
	{
		printf("unable to locate memory\n");
		return -1;
	}	

	printf("Enter %d elements of second array\n", ilength2);

	for (i = 0; i < ilength2; ++i)
	{
		printf("Enter elements : %d\n",i+1 );
		scanf("%d",&q[i]);
	}

	Inc(p,ilength,q,ilength2);

	free(p);
	free(q);
	return 0;
}