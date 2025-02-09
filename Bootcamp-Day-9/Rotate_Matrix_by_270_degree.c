#include<stdio.h>
int main()
{
	int n,m,temp;
	printf("Enter rows and column\n");
	scanf("%d %d",&n,&m);
	int a[n][m],b[m][n],i,j;
	printf("Enter elements in array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("Tranpose of matrix =\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[j][i]=a[i][j];  
		}
	}
    	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]); 
		}
		printf("\n");
	}
        printf("Rotated array:\n");
   
   
    int left=0,right=n-1;
    while(left<right)
    {
        for(i=0;i<n;i++)
        {
          temp=b[left][i];
          b[left][i]=b[right][i];
          b[right][i]=temp;
        }
       left++;
       right--;
    }
    
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}