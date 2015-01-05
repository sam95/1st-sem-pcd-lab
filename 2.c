#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10],b[10],i=0,j,k,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	k=n; //keeping a copy of the actual number just in case
	while(k!=0)
	{
		a[i]=k%10;
		//printf("k=%d  and a[%d]=%d and i=%d\n",k,i,a[i],i);     // uncomment for more clarity!
		k=k/10;
		i++;
	}
	// a array contains the reversed number and we are reversing the contents of array "a" and storing it in b
	// i contains the length of the string
	for(j=0;j<i;j++)
	{
		b[j]=a[i-j-1];  // reversing the array and storing it in b! remember it's i-j-1 and not just i-j
	}
	for(j=0;j<i;j++)
	{
		if(a[j]!=b[j])
		{
			printf("Not a palindrome\n");
			exit(0);
		}
	}
	printf("It is a palindrome\n");
}
