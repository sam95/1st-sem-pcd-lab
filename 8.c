#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,a[10],key,low,high,mid,flag=0;
	printf("Enter the no. of elements\n");
	scanf("%d",&n);
	printf("Enter %d elements in ascending order \n",n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the key element to be searched\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low <= high) // The binary search logic! Should be easy enough!
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag=1;
			break;
		}
		if(key > a[mid])
		{
			low=mid+1;
		}
		else
		{
			high = mid-1;
		}
	}
	if(flag==1)
	{
		printf("Successful Search\n");
	}
	else
	{
		printf("Unsuccessful Search\n");
	}
}
// Drop a mail if there's any query! mail id: sameerasy7@gmail.com
