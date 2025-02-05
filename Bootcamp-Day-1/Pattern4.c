#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows:\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		int c='A';
		for(j=0;j<i+1;j++)
		{
			printf("%c ",c++);
	    }
		printf("\n");
	}
}
