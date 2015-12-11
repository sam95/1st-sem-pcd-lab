#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++) // if the number is divisible by any number other than 1 and itself then it's a prime number so from 2 till n/2 we keep checking
	{
		if(n%i==0) // if it is divisible then we don't call it prime
		{
			return 0;
		}
	} // if it is not divisible then it won't enter the if inside the for loop so control comes outside! and 1 would be returned!
	return 1;
}
void main()
{
	int num,flag;
	printf("enter the number\n");
	scanf("%d",&num);
	flag=prime(num); // collecting flag to check whether the number recieved is 1 or 0
	if(flag==1)
	{	
		printf("The given number is prime\n");
	}
	else
	{
		printf("The given number is not prime\n");
	}
}
// Cheers!
