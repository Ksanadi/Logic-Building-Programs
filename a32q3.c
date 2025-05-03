#include <stdio.h>

int Small(char *str)
{
	static int iCnt = 0;

	if(*str != '\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
		iCnt++;
		}
		str++;
		Small(str);
	}
	return iCnt;
}

int main()
{
	char arr[]="SSabcdAA";
	int iret = 0;

	iret = Small(arr);
	printf("%d\n",iret);
	return 00;
}