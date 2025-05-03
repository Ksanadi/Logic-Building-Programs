#include <stdio.h>

int SearchFirstOcc(int iNo, int iDigit)
{
	int iDigit1=0,i=0,ipos=0,irev=0;

	while(iNo>0)
	{
		iDigit1=iNo%10;
		irev=irev*10+iDigit1;
		iNo=iNo/10;
	}
	
	while(irev>0)
	{
		iDigit1 = irev % 10;
		i++;
		if(iDigit1==iDigit)
		{
			ipos = i;
			break;
		}
		irev= irev / 10;
	}
	if(ipos==0)
	{
		return -1;
	}
	else
	{
		return ipos;
	}
}

int main()
{
	int iret=0;

	iret=SearchFirstOcc(6757374,3);
	printf("%d\n",iret );
	return 0;
}