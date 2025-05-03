#include <stdio.h>
#include<stdlib.h>

void DisplayPower(int arr[],int isize)
{
	int i=0,j=0,power=1;
	printf("\n");

	for (i = 0; i < isize; ++i)
	{
		power=1;
		for (j = 0; j < i; ++j)
		{
			power=power*arr[i];
		}
		printf("%d\t",power );
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

	DisplayPower(p,ilength);

	free(p);
	return 0;
}