#include<stdio.h>
#include<stdlib.h>
void copy(char str1[],char str2[])
{
	int i=0;
	while(str1[i]!='\0') // '\0' is called the null character! it indicates end of the string!
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0'; // since '\0' is not present in string str2 we insert it.
}
void main()
{
	char str1[20],str2[20];
	printf("Enter a string\n");
	scanf("%s",str1);
	copy(str1,str2); // call to the function!
	printf("The copied string is %s\n",str2);
}
// mail me! sameerasy7@gmail.com
