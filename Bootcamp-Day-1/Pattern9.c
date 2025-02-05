#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			if(i==n||j==0||j==i)
			{
			printf("* ");
		    }
		    else
		    {
		       printf("  ");	
			}
		}
		printf("\n");
	}
}
