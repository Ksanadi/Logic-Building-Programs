#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define FAILURE -1

typedef int BOOL;

BOOL Inc(int arr[],int size,int brr[],int isize2)
{
	int i=0;


	if(size!=isize2)
	{
		return FALSE;
	}

	for ( i = 0; i < size; i++)
	{
		 if(arr[i]!=brr[i])
		{
			break;
		}
	}

	if(i<size)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int ilength =0,i=0,ilength2=0;
	int *p=NULL;
	int *q=NULL;
	BOOL bret=FALSE;

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

	bret=Inc(p,ilength,q,ilength2);

	if(bret=FALSE)
	{
		printf("not equal\n");
	}
	else
	{
		printf("equal\n");
	}

	free(p);
	free(q);
	return 0;
}