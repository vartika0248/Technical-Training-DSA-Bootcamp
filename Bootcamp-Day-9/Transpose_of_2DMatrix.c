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
  printf("The Transpose of matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
  return 0;
}