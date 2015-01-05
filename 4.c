#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,x,a[10],poly=0;
	printf("Enter the degree of the polynomial : "); //enter the highest power of x in the equation!
	scanf("%d",&n);
	printf("Enter the %d coefficients\n",n+1);// enter the co-efficients of the equation as it is from the beginning
	for(i = 0 ; i <= n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value of x :"); // enter the value of x in the equation
	scanf("%d",&x);
	poly=a[0]; // storing the co-eff of x^0
	for(i = 1 ; i <= n ; i++)
	{
		//printf("%d\n",poly); //uncomment for more clarity
		poly = poly* x+a[i]; // Formula to calculate the sum trace the equation for more clarity
	}
	printf("The sum of polynomial = %d\n",poly);
}
// send a mail incase of doubts to sameerasy7@gmail.com!
