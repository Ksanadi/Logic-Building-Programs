#include<stdio.h>
#include<stdlib.h>

int *Inc(int arr[],int size,int brr[],int isize2)
{
	int i=0,isize3=isize2+size,j=0;
	int *k=NULL;

	if((arr==NULL)||(size<1)||(brr==NULL)||(isize2<1))
	{
		return NULL;
	}

	k=(int *)malloc(isize3*sizeof(int));
	
	for(i=0;i<size;i++)
	{
		k[i]=arr[i];
	}

	for(j=0;j<isize2;j++)
	{
		k[i]=brr[j];
		i++;
	}

	return k;
}

int main()
{
	int ilength =0,i=0,ilength2=0;
	int *p=NULL;
	int *q=NULL;
	int *r=NULL;

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

	r=Inc(p,ilength,q,ilength2);

	for(i=0;i<(ilength+ilength2);i++)
	{
		printf("%d\t",r[i] );
	}

	free(p);
	free(q);
	free(r);
	return 0;
}