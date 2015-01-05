#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float d,x1,x2,r;
	printf("Enter the three co-efficient :\n"); // General form ax^2+bx+c=0.. co-efficients are a,b and c
	scanf("%d%d%d",&a,&b,&c); // taking them in
	if (a == 0) // please check SHRIDHARA'S formula. if a=0 then the roots become infinity.. so not valid
	{
		printf("Invalid Input \n");
	}
	else
	{
		d = (b * b) - (4 * a * c); // b^2-4*a*c is called the determinant
		r=sqrt(fabs(d));// fabs(X) is a function which will return the absolute value!even if it is +ve or -ve only the +ve value will be considered!
		if (d > 0) // and some simple cases below!
		{
			x1 = (-b +r) / (2.0*a);
			x2 = (-b -r) / (2.0*a);
			printf("\n The roots are real and distinct\n");
			printf("\n The roots are \n 1) x1=%f\t\t \n 2) x2=%f\n",x1,x2);
		}
		else if (d == 0)
		{
			x1 = x2 = -b/(2.0*a);
			printf("\n The roots are real and equal\n");
			printf("\n The roots are: \n 1) x1=x2=%f\n",x1);
		}
		else
		{
			x1 = -b / (2.0 * a);
			x2 = r / (2.0*a);
			printf("\n The roots are real and imaginary\n");
			printf("\n The roots are:\n 1) %f +i %f \t\t\n 2) %f –i %f \n",x1,x2,x1,x2);
		}
	}
}
// shoot a mail in case you have any doubts! sameerasy7@gmail.com
