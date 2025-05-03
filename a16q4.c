#include<stdio.h>
#include<stdlib.h>

void DisplayPallindrome(int arr[],int isize)
{
	int temp=0,idigit=0,irev=0,i=0;

	for(i=0;i<isize;i++)
	{
		temp=arr[i];
		irev=0;
		while(temp>0)
		{
			idigit=temp%10;
			irev=irev*10+idigit;
			temp=temp/10;
		}
		if(arr[i]==irev)
		{
			printf("%d\t",arr[i]);
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

	for ( i = 0; i < ilength; ++i)
	{
		printf("Enter element: %d\n",i+1 );
		scanf("%d",&p[i]);
	}

	DisplayPallindrome(p,ilength);

	free(p);
	return 0;
}