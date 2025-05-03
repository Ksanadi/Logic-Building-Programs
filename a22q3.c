#include<stdio.h>
#include<stdlib.h>
int Inc(char arr[],int size)
{
	int i=0,isum=0,temp=0,idigit=0;

	if((arr==NULL)||(size<1))
	{
		return -1;
	}

	for ( i = 0; i < size; ++i)
	{
		if((arr[i]>='A')&&(arr[i]<='Z'))
		{
			isum++;
		}
	}
	return isum;
}

int main()
{
	int ilength =0,i=0,iret=0;
	char *p=NULL;

	printf("Enter no of elements\n");
	scanf("%d",&ilength);

	p=(char *)malloc(ilength*sizeof(int));

	if(p==NULL)
	{
		printf("unable to locate memory\n");
		return -1;
	}

	printf("Enter %d elements\n", ilength);

	for (i = 0; i < ilength; ++i)
	{
		printf("Enter element: %d\n",i+1 );
		scanf("%s",&p[i]);
	}

	iret=Inc(p,ilength);

	printf("%d\n",iret );

	free(p);
	return 0;
}