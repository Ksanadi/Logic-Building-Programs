#include<stdio.h>
#include<stdlib.h>
void Inc(char arr[],int size)
{
	int i=0;

	if((arr==NULL)||(size<1))
	{
		return ;
	}

	for ( i = 0; i < size; ++i)
	{
		if((arr[i]>='A')&&(arr[i]<='Z'))
		{
			printf("%c\n",arr[i]+32 );
		}
		else
		{
			printf("%c\n",arr[i] );
		}
	}
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

	Inc(p,ilength);

	
	free(p);
	return 0;
}