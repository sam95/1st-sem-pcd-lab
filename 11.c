#include<stdio.h>
#include<stdlib.h>
int fact(int n) // A recursive function 
{
	if(n==0 || n==1) // remember : 0!=1 special case.
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1)); // getting a doubt? For ex. fact(5)=5*fact(4).
	}
}
void main()
{
	int n,r;
	float ncr;
	printf("Enter values of N and R also N>=R\n");
	scanf("%d%d",&n,&r);
	printf("The factorial of N is %d\n",fact(n));
	ncr=(fact(n)/(fact(n-r)*fact(r))); // ncr=n!/((n-r)!*r!) . Getting a doubt? Contact math dept. *LOL*
	printf("The ncr value is %f\n",ncr);
}
// Feel free to drop a mail to sameerasy7@gmail.com 
