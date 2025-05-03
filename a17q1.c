#include <stdio.h>
#include<stdlib.h>

void DisplayFactorial(int arr[],int isize)
{
	int i=0,j=0,ifact=1;
	printf("\n");
	for (i = 0; i < isize ; ++i)
	{
		ifact=1;
		j=arr[i];
		while(j>0)
		{
			ifact=ifact*j;
			j--;
		}
		printf("%d\t", ifact);
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

	for (int i = 0; i < ilength; ++i)
	{
		printf("Enter element: %d\n",i+1 );
		scanf("%d",&p[i]);
	}

	DisplayFactorial(p,ilength);

	free(p);
	return 0;
}