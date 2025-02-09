#include<stdio.h>
int Max(int arr[],int n,int m);
int Chocolate__Maximum_Difference(int arr[],int n,int m)
{
    if (m == 0 || n == 0)
            return 0;
    int min_diff = 99999;
    for (int i = 0; i <= n - m; i++)
    {
      int max_choco = arr[i];
      int min_choco = arr[i];
      for (int j = i; j < i + m; j++)
      {
        if (arr[j] > max_choco) {
            max_choco = arr[j];
        }
        if (arr[j] < min_choco) {
            min_choco = arr[j];
        }
      }
        int diff = max_choco - min_choco;
       if (diff < min_diff) {
            min_diff = diff;
    }
}

return min_diff;
}
int Max(int arr[],int n,int m)
{
    for(int i=0;i<m;i++)
    {

    }
}
int main()
{
    int n,i,m;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter value for m:\n");
    scanf("%d",&m);
    int r= Chocolate__Maximum_Difference(arr,n,m);
    printf("The result is : %d ",r);
    return 0;
}