#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int a[10],*p,i,n; // Pointers are by default integers! the data type to the left of the pointer indicates to which type of data it is pointing!
	float sum=0,avg,std=0;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a; // making the pointer p to point to the beginning of the array! a is also a pointer!
	for(i=0;i<n;i++)
	{
		sum=sum+*p;
		p++; // increments the value of pointer to point to the next value in the array! This is pointer incrementation!
	}
	avg=sum/n;
	p=a;
	for(i=0;i<n;i++)
	{
		std=std+pow((avg-*p),2); //Sorry! I can't help you with this! You have this in the 4th sem! just Mugg this line! :P
		p++;
	}
	std=sqrt(std/n); //Copy the above comment! :P :D
	printf("The sum %f mean %f and Standard deviations %f \n",sum,avg,std);
}
//Thanks! Will see you in the Next sem lab! All the best! :) Last but not the least! Mail me sameerasy7@gmail.com! :P :D
