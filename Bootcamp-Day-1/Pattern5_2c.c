#include<stdio.h>
int main()
{
	int i,j,k,l,n;
    printf("Enter number of rows:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int c='A';
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		for(j=0;j<n-i;j++)
		{
			printf("%c",c);
			c++;
	    }
	    for(j=0;j<n-i-1;j++)
	    {
	    	
	    	printf("%c",c-2);
	    	c--;
	    
		}
		printf("\n");
	}
}
