#include<stdio.h>
#define N 4
#define M 4
void printSpiralElements(int mat[N][M])
{
    int top=0,left=0,down=N-1,right=M-1;
    while(top<=down && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            printf("%d ",mat[top][i]);
        }
        top++;
        for(int i=top;i<=down;i++)
        {
            printf("%d ",mat[i][right]);
        }
        right--;
        if(top<=down)
        {
            for(int i=right;i>=left;i--)
            {
                printf("%d ",mat[down][i]);
            }
            down--;
        }
        if(left<=right)
        {
            for(int i=down;i>=top;i--)
            {
                printf("%d ",mat[i][left]);
            }
            left++;
        }
    }

}
int main()
{
  int i,j,n,m;
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
  printf("The elements in spiral pattern are:\n");
  printSpiralElements(arr);
  return 0;
}