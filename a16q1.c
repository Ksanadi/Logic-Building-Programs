#include <stdio.h>
#include<stdlib.h>

int Difference(int arr[],int isize)
{
	int i=0,ieven=0,iodd=0;

	for (int i = 0; i < isize; ++i)
	{
		if(arr[i]%2==0)
		{
			ieven=ieven+arr[i];
		}
		else
		{
			iodd=iodd+arr[i];
		}
	}

	return ieven-iodd;
}

int main()
{
	int ilength =0,iret=0,i=0;
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

	iret=Difference(p,ilength);

	printf("Result is %d\n",iret);

	free(p);
	return 0;
}