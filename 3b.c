#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the year!\n");
	scanf("%d",&n);
	if(n%4==0) //No need to calculate for n%100 or n%400 !
	{
		printf("It's is a leap year!\n");
	}
	else
	{
		printf("It's is not a leap year!\n");
	}
}
// This should be clear enough! Say hi! Send a mail to sameerasy7@gmail.com!
