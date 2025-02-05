#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			if(i==n-1||j==0||j==i)
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
	return 0;
}
