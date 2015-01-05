#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i;
	float k=0,n;
	printf("Enter the number\n"); // taking the number from the user
	scanf("%f",&n);
	if(n==1) //special case! (1*1=1)
	{
		printf("The square root is 1\n");
		exit(0);
	}
	if(n==0) // special case! (0*0=0)
	{
		printf("The square root is 0\n");
		exit(0);
	}
	for(i=0;i<n;i++) // calculating the integer part of the variable! ex. root(3)=1.732... Integer part of the number is 1! Fractional part is .732!
	{
		if(i*i > n) //ex. root(3)'s integer part=1 so (1*1 < 3) but (2*2 > 3) so the root lies between 1 and 2! we need to find the fractional part of 1!
		{
			break;
		}
	}
	//printf("The Integer value is %d\n",i); //uncomment for more clarity 
	i--;
	//printf("The Integer value is %d\n",i); //uncomment for more clarity 
	k=i;  //copying the integer value and calculating the fractional part for it
	while(k<=i+1) //ex. root(3) can lie between 1 and 2 only! so the integer part should only be 1 and not 2!
	{
		if(k*k <= n && (k+0.001)*(k+0.001)>=n) //ex.root(2)=1.4142 but 1.414*1.414 < 2 and 1.1415*1.415 > 2 so the root is b/w 1.414 and 1.415
		{
			printf("The root is %f\n",k);
			exit(0);
		}
		else
		{
			k=k+0.001; //the number is incremented by 0.001 and checked again!
		}
	}
}
//Feel free to shoot a mail if there is any error or doubt. Mail me at sameerasy7@gmail.com!
