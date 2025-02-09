#include<stdio.h>
#define N 3
int Rotate90Degree(int mat[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0, k = N - 1; j < k; j++, k--) {
            int temp = mat[i][j];
            mat[i][j] = mat[i][k];
            mat[i][k] = temp;
        }
    }
}
int main()
{
  int n,m,i,j;
  printf("Enter the number of rows:\n");
  scanf("%d",&n);
  int arr[N][N];
  int trr[N][N];
  printf("Enter the elements in 2D array:\n");
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
    scanf("%d",&arr[i][j]);
    }
  }
  printf("The original matrix is:\n");
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
     printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("The transposed array is:\n");
  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
     trr[i][j]=arr[j][i];
     printf("%d  ",trr[i][j]);
    }
    printf("\n");
  }
  /**int left=0;
  int right=n-1;
  while(left<right)
  {
    for(i=0;i<n;i++)
    {
    int temp=0;
    temp=trr[i][left];
    trr[i][left]=trr[i][right];
    trr[i][right]=temp;
    left++;
    right--;
    }
  }**/
   printf("The matrix after rotating 90 degree is:\n");
   Rotate90Degree(arr);
   for(i=0;i<N;i++)
   {
    for(j=0;j<N;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   return 0;
}