#include<stdio.h>
#include<stdlib.h>
void Inc(int arr[],int size,int ino)
{
	int i=0,odd=0,even=0;

	if((arr==NULL)||(size<1))
	{
		return;
	}

	for ( i = 0; i < size; ++i)
	{
		 if(arr[i]%ino==0)
		{
			printf("%d\n",arr[i] );
		}
	}
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

	printf("Enter no to be divided from:\n");
	scanf("%d",&iret);

	Inc(p,ilength,iret);

	free(p);
	return 0;
}