#include <stdio.h>
#include<stdlib.h>

void DisplayPrime(int arr[],int isize)
{
	int i=0,j=0,isum=0;

	for (i = 0; i < isize ; i++)
	{
		
		for (j = 1,isum=0; j < (arr[i]/2); j++)
		{
			if((arr[i]%j)==0)
			{
				isum=isum+j;
			}
		}
		if(isum==1)
		{
			printf("%d\t",arr[i] );
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

	DisplayPrime(p,ilength);

	free(p);
	return 0;
}