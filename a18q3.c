#include<stdio.h>
#include<stdlib.h>
int Inc(int arr[],int size)
{
	int i=0,odd=0,even=0;

	if((arr==NULL)||(size<1))
	{
		return -1;
	}

	for ( i = 0; i < size; ++i)
	{
		 if(arr[i]%2==0)
		{
			even=even+arr[i];
		}
		else
		{
			odd=odd+arr[i];
		}
	}

	return even-odd;
}

int main()
{
	int ilength =0,i=0,iret=0;
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

	iret=Inc(p,ilength);

		printf("%d\n",iret);

	free(p);
	return 0;
}