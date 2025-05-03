#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Inc(int arr[],int size)
{
	int istart=0,iend=0,temp=0,idig=0,rev=0,i=0;

	if((arr==NULL)||(size<1))
	{
		return FALSE;
	}

	for ( istart = 0,iend=size-1; istart < iend; istart++,iend--)
	{
		 if(arr[istart]!=arr[iend])
		{
			break;
		}
	}

	for(i=0;i<size;i++)
	{
		temp=arr[i];
		rev=0;
		while(temp!=0)
		{
			idig=temp%10;
			rev=rev*10+idig;
			temp=temp/10;
		}

		if(arr[i]!=rev)
		{
			break;
		}
	}

	if((istart==iend)&&(i==size))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int ilength =0,i=0;
	int *p=NULL;
	BOOL bret=FALSE;

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

	bret=Inc(p,ilength);

	if(bret==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}

	free(p);
	return 0;
}