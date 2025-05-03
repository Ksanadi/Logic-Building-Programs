#include<stdio.h>
#include<stdlib.h>

int *Inc(int arr[],int size)
{
	int i=0,j=0;
	int *k=NULL;

	if((arr==NULL)||(size<1))
	{
		return NULL;
	}

	k=(int *)malloc(size*sizeof(int));
	
	for(i=0;i<size;i++)
	{
		k[i]=arr[i];
	}

	return k;
}

int main()
{
	int ilength =0,i=0;
	int *p=NULL;
	int *r=NULL;

	printf("Enter no of elements in array\n");
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

	r=Inc(p,ilength);

	for(i=0;i<ilength;i++)
	{
		printf("%d\t",r[i] );
	}

	free(p);
	free(r);
	return 0;
}