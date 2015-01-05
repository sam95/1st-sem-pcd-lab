#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PIE 3.142 // Just a universal declaration called macro! Don't worry much about it! :P

void main()
{
	int i,d;
	float term,num,den,sum=0,x;
	printf("Enter the degree\n");
	scanf("%d",&d);
	x=d*(PIE/180); // converting degree to radian! 
	num=x; // trace the equtaion given in the question for more clarity
	den=1;
	i=2;
	do
	{
		term=num/den;
		num=-num*x*x;
		den=den*i*(i+1);
		sum=sum+term;
		i=i+2;
	}while(fabs(term)>=0.00001); //value correct to 4 decimal places!
	printf("The sine series of %d is %f\n",d,sum); // sum what we have calculated!
	printf("Sine function of %d is %f\n",d,sin(x)); //sum what sine function is returning!
}
// Don't forget what i forgot in my exam! while compiling give "cc 5.c -lm" -lm is the most important part!
// Drop in and say Hi! sameerasy7@gmail.com
