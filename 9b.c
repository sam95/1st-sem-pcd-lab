#include<stdio.h>
#include<stdlib.h>
int v,c,i,va,ve,vi,vo,vu; //I'm bored of initialising each and every variable to 0! Hence I declared it globally!
// All global declarations have the default value 0 in each variable!
void main()
{
	char str[20]; // should be the easiest code in your lab!
	printf("Enter a sentence!\n");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			va++;
			v++;
		}
		else if(str[i]=='e')
		{
			ve++;
			v++;
		}
		else if(str[i]=='i')
		{
			vi++;
			v++;
		}
		else if(str[i]=='o') // remember! while comparing a character always encose the character within 'single quotes' and NOT "double quotes"!
		{
			vo++;
			v++;
		}
		else if(str[i]=='u')
		{
			vu++;
			v++;
		}
		else
		{
			c++;
		}
		i++;
	}
	printf("The string contains %d vowels and %d consonants\n",v,c);
	printf("A repeats %d times\n",va);
	printf("E repeats %d times\n",ve);
	printf("I repeats %d times\n",vi);
	printf("O repeats %d times\n",vo);
	printf("U repeats %d times\n",vu);
}
// mail mail mail! Aren't you bored of it? Sorry! :P sameerasy7@gmail.com!
