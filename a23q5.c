#include<stdio.h>
#include<stdlib.h>

void Display23_5(int arr[],int size)
{
	for (int i = 0; i < size; ++i)
	{
		for(int j=0;j<arr[i];j++)
		{
			if(arr[i]%2==0)
			{
				printf("*\t");
			}
		}
		printf("\n");
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

	Display23_5(p,ilength);

	free(p);
	return 0;
}