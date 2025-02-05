#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		int p=1;
		for(j=0;j<n-i;j++)
		{
			printf("%d",p);
			p++;
		}
		for(k=0;k<n-i-1;k++)
		{
		printf("%d",p-2);
		p--;
		}
		printf("\n");
	}
	return 0;
}
