#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int roll,marks;
	char name[15],grade[2]; // make grade an array to avoid all sorts of problems! But don't tell your teachers! ;) B-)
};
void main()
{
	int i,n,temp;
	struct student s[10]; //array of a structured object! s is an object to structure student
	char str[15]; 
	printf("Enter the number of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name of student %d\n",i);
		scanf("%s",s[i].name);
		printf("Enter %d's roll number\n",i);
		scanf("%d",&s[i].roll);
		printf("Enter %d's grade\n",i);
		scanf("%s",s[i].grade);
		printf("Enter %d's marks\n",i);
		scanf("%d",&s[i].marks);
	}
	printf("Enter the name of the student to be searched\n");
	scanf("%s",str);
	for(i=0;i<n;i++)
	{
		temp=strcmp(str,s[i].name); // strcmp is string compare! returns 0 if the strings are equal!
		if(temp==0)
		{
			printf("His marks is %d\n",s[i].marks);
			exit(0);
		}
	}
	printf("Student does not exist\n");
}
// You know what to do! :P sameerasy7@gmail.com!
