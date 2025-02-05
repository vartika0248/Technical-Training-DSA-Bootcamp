#include<stdio.h>
int main()
{
	int i,j,n=6,m=9;
	//printf("Enter number of rows:\n");
	//scanf("%d",&n);
	//printf("Enter number of columns:\n");
	//scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if (j < i) 
			{
                printf("%d", 5 - i);  
            } 
			else if (j > 8 - i) 
			{
                printf("%d", 5 - i);  
            } 
			else 
			{
                printf("%d", 5 - (j < 4 ? i : 0)); 
            }
        }
        printf("\n");
    }
		
	return 0;

}
