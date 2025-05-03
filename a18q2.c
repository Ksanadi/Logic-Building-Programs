#include<stdio.h>
#include<stdlib.h>
void Inc(int arr[],int size)
{
	int i=0;

	if((arr==NULL)||(size<1))
	{
		return;
	}

	for ( i = 0; i < size; ++i)
	{
		 if(arr[i]%2==0)
		{
			arr[i]=0;
		}
		else
		{
			arr[i]=1;
		}
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

	for (i = 0; i < ilength; ++i)
	{
		printf("elements : %d\n",p[i] );
	}

	free(p);
	return 0;
}