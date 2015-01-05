#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q,i,j,k;
	printf("\n Enter the order of the matrix A :");
	scanf("%d%d",&m,&n);
	printf("\n Enter the order of the matrix B :");
	scanf("%d%d",&p,&q);
	if(n == p) // if the orders match with each other's row and column then they are multiplicable
	{
		printf("\n Enter the elements of matrix A \n");// taking A matrix
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n Enter the elements of matrix B \n"); // taking B matrix
		for(i = 0 ; i < p ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i = 0 ; i < m ; i++) // order of the new multiplicated matrix is m X q
		{
			for(j = 0 ; j < q ; j++)
			{
				c[i][j]=0;
				for(k = 0 ; k < n ; k++)
				{
					c[i][j] = (a[i][k] * b[k][j])+c[i][j]; // multiplying both. trace it for better understanding!
				}
			}
		}
		printf("MATRIX A \n"); // printing all the matrices
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				printf("%d  ", a[i][j]);
			}	
			printf("\n");
		}
		printf("MATRIX B \n");
		for(i = 0 ; i < p ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				printf(" %d \t", b[i][j]);
			}
			printf("\n");
		}
		printf("MATRIX C \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				printf(" %d \t", c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Multiplication not possible!");
	}
}
//I'm a human! and they say "To err is human" point me out for errors at sameerasy7@gmail.com!
