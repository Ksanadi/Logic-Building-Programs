#include<stdio.h>
#include<stdlib.h>

int Inc(char arr[],char ch,int size)		//error
{
	int i=0,icnt=0;

	for ( i = 0; i < size; ++i)
	{
		if((arr[i]==ch)||(arr[i]==(ch-32))||(arr[i]==(ch+32)))
		{
			icnt++;
		}
	}
	return icnt;
}

int main()
{
	int ilength =0,i=0,iret=0;
	char *p=NULL;
	char ch='\0';

	printf("Enter no of elements\n");
	scanf("%d",&ilength);

	p=(char *)malloc(ilength*sizeof(char));

	if(p==NULL)
	{
		printf("unable to locate memory\n");
		return -1;
	}

	printf("Enter %d elements\n", ilength);

	for (i = 0; i < ilength; ++i)
	{
		fflush(stdin);
		printf("Enter element: %d\n",i+1 );
		scanf("%c",&p[i]);

	}
	fflush(stdin);
	printf("character to be search\n");
	scanf("%c",&ch);

	iret=Inc(p,ch,ilength);

	printf("%d\n",iret );

	
	free(p);
	return 0;
}