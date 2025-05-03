#include <stdio.h>

void Toggle(char *str)
{
	if(*str!='\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
		{
			*str=(*str)-32;
		}
		else
		{
			*str=(*str)+32;
		}
		str++;
		Toggle(str);
	}
}

int main()
{
	char arr[] = "aBCd";
	Toggle(arr);
	printf("%s",arr);
}