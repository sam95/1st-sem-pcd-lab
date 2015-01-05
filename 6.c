#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,a[10],b[10],temp;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	printf("Enter %d elements \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i< n-1;i++) //bubble sort logic! will be easy if you take an example and trace it!
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	/*printf("\n The original elements are\n ");
	for(i = 0 ; i < n ; i++)
	{
		printf("%d \n",b[i]);
	}*/ // uncomment the block for more clarity
	printf("The Sorted elements are \n");
	for(i = 0 ; i < n ; i++)
	{
		printf("%d \n",a[i]);
	}
}
