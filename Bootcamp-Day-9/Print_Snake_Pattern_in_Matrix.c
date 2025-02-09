#include<stdio.h>
int main()
{
  int n,m,i,j;
  printf("Enter the number of rows:\n");
  scanf("%d",&n);
  printf("Enter the number of columns:\n");
  scanf("%d",&m);
  int arr[n][m];
  printf("Enter the elements in 2D array:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
    scanf("%d",&arr[i][j]);
    }
  }
  printf("The original matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("The Snake Matrix is:\n");
  for(i=0;i<n;i++)
   {
     if(i%2==0)
     {
        for(j=0;j<n;j++)
        {
        printf("%d ",arr[i][j]);
        }
     }
     else
     {
        for(j=m-1;j>=0;j--)
        {
         printf("%d ",arr[i][j]);
        }
     }
   }
  return 0;
}
