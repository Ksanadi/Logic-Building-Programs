#include<stdio.h>
#include<stdlib.h>

void Inc(float arr[],int size)
{
	int i=0;

	if((arr==NULL)||(size<1))
	{
		return ;
	}

	for(i=0;i<size;i++)
	{
		if(arr[i]<35)
		{
			printf("%f : fail\n",arr[i]);
		}
		else if((arr[i]>=35)&&(arr[i]<50))
		{
			printf("%f : pass\n",arr[i]);
		}
		else if((arr[i]>=50)&&(arr[i]<60))
		{
			printf("%f : second\n",arr[i]);
		}
		else if((arr[i]>=60)&&(arr[i]<70))
		{
			printf("%f : first\n",arr[i]);
		}
		else
		{
			printf("%f : fcwd\n",arr[i]);
		}
	}
}

int main()
{
	int ilength =0,i=0;
	float *p=NULL;

	printf("Enter no of elements\n");
	scanf("%d",&ilength);

	p=(float *)malloc(ilength*sizeof(float));

	if(p==NULL)
	{
		printf("unable to locate memory\n");
		return -1;
	}

	for (i = 0; i < ilength; ++i)
	{
		printf("Enter marks: %d\n",i+1 );
		scanf("%f",&p[i]);
	}

	Inc(p,ilength);

	free(p);
	return 0;
}