#include<stdio.h>
int main()
{
	int i,j,k,n;
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
			printf("%d",j+1);
		}
		int a = i;
		for(k=1;k<=i;k++)
		{
			printf("%d",a);
			a--;
		}
		printf("\n");
	}
}
