#include<stdio.h>

int Difference(int ino)
{
	static int iMax = 0, iMin = 9;
	static int iDiff = 0, iDigit = 0;

	if(ino!=0)
	{
		iDigit = ino%10;
		if(iDigit>iMax)
		{
			iMax = iDigit;
		}
		if(iDigit<iMin)
		{
			iMin = iDigit;
		}
		iDiff = iMax - iMin;
		ino = ino/10;
		Difference(ino);
	}
	return iDiff;
}

int main()
{
	int iret = Difference(987);
	printf("%d\n",iret );
	return 0;

}