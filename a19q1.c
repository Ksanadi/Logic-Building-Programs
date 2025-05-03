#include<stdio.h>
#include<stdlib.h>
void Inc(int arr[],int size)
{
	int i=0,isum=0,temp=0,idigit=0,imax=0,imaxdigit=0,brr[10]={0};

	if((arr==NULL)||(size<1))
	{
		return;
	}

	for ( i = 0; i < size; ++i)
	{
		temp=arr[i];
		 while(temp!=0)
		 {
		 	idigit=temp%10;
		 	brr[idigit]++;
		 	temp=temp/10;
		 }
	}

	for(i=0;i<10;i++)
	{
		if(brr[i]>imax)
		{
			imax=brr[i];
			imaxdigit=i;
		}
	}

	printf("%d occurs %d times\n",imaxdigit,imax );
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

	free(p);
	return 0;
}