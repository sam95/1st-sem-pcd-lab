#include<stdio.h>
int rightrot(unsigned int x,unsigned int n)
{
	if (n == 0)
	{
		return x;
	}
	else
	{
		return ((x >> n) | (x << ( 32- n))); // will rotate "bit x" 'n times'
	}
}
void main ( )
{
	unsigned int ans,x,n;
	printf("Enter the data to be rotated\n"); // taking the data x
	scanf("%d",&x);
	printf("Enter the number of times the data has to be roatated\n");
	scanf("%d",&n); // taking the number of times to be roatated
	n=n%4; // because repeating the bit 4 times would result in repeating the number 0 times. number greater than 4 would result in a cycle!
	ans=rightrot(x,n); // would contain the roatated answer
	printf("The value after rotating the bit %d times is ",n);
	printf("%d\n",ans);
}
// mail me at sameerasy7@gmail.com
